/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:08:00 by tbertozz          #+#    #+#             */
/*   Updated: 2022/06/03 15:07:01 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	clear(t_main *instance)
{
	size_t	i;

	i = 0;
	while (i < instance->amount)
	{
		pthread_mutex_destroy(&instance->forks_mutexes[i]);
		i++;
	}
	pthread_mutex_destroy(&instance->write_mutex);
	pthread_mutex_destroy(&instance->die_mutex);
	free(instance->forks_mutexes);
	free(instance->philosophers);
	free(instance->forks);
	return (0);
}

int	initial_mutexes(t_main *instance)
{
	size_t	i;

	instance->forks_mutexes = malloc(sizeof(pthread_mutex_t)
			* instance->amount);
	if (!instance->forks_mutexes)
		return (ft_error(MALLOC_ERROR));
	i = 0;
	while (i < instance->amount)
	{
		pthread_mutex_init(&instance->forks_mutexes[i], NULL);
		i++;
	}
	pthread_mutex_init(&instance->write_mutex, NULL);
	pthread_mutex_init(&instance->die_mutex, NULL);
	return (0);
}

int	initial_philosophers(t_main *instance)
{
	size_t	i;

	instance->philosophers = malloc(sizeof(t_philosopher) * instance->amount);
	instance->forks = malloc(sizeof(int) * instance->amount);
	if (!instance->philosophers || !instance->forks)
		return (ft_error(MALLOC_ERROR));
	i = 0;
	while (i < instance->amount)
	{
		instance->forks[i] = 0;
		instance->philosophers[i].position = i + 1;
		instance->philosophers[i].l_fork = i;
		instance->philosophers[i].r_fork = (i + 1) % instance->amount;
		instance->philosophers[i].meals = 0;
		instance->philosophers[i].eating = 0;
		instance->philosophers[i].instance = instance;
		i++;
	}
	return (0);
}

int	initial_args(t_main *instance, int argc, char **argv)
{
	if (argc < 5 || argc > 6)
		return (ft_error (ARG_NUMBER));
	if (ft_atol(argv[1], &instance->amount) || instance->amount == 0
		|| ft_atol(argv[2], &instance->timetodie) || instance->timetodie == 0
		|| ft_atol(argv[3], &instance->timetoeat) || instance->timetoeat == 0
		|| ft_atol(argv[4], &instance->timetosleep)
		|| instance->timetosleep == 0)
		return (ft_error (WRONG_ARG));
	if ((argc == 6 && ft_atol(argv[5], &instance->meals))
		|| instance->meals == 0)
		return (ft_error (WRONG_ARG));
	else if (argc == 5)
		instance->meals = -1;
	instance->finished = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	t_main	instance;

	if (initial_args(&instance, argc, argv)
		|| initial_philosophers(&instance)
		|| initial_mutexes(&instance))
		return (1);
	if (start(&instance))
		return (1);
	pthread_mutex_lock(&instance.die_mutex);
	pthread_mutex_unlock(&instance.die_mutex);
	clear(&instance);
	exit(0);
}
