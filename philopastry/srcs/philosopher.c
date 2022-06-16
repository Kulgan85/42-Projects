/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:07:19 by tbertozz          #+#    #+#             */
/*   Updated: 2022/06/03 15:51:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	start(t_main *instance)
{
	size_t		i;
	pthread_t	tid;

	i = 0;
	pthread_mutex_lock(&instance->die_mutex);
	while (i < instance->amount)
	{
		if (pthread_create(&tid, NULL, &schedule,
				(void *)&instance->philosophers[i]))
			return (ft_error(PTHREAD_ERROR));
		i++;
	}
	instance->start_time = get_time();
	return (0);
}

int	is_dead(t_philosopher *philo)
{
	if (!philo->eating && get_time() > philo->threshold)
	{
		ft_output(philo, delta_time(philo->instance->start_time), DIED);
		pthread_mutex_lock(&philo->instance->write_mutex);
		pthread_mutex_unlock(&philo->instance->die_mutex);
		return (1);
	}
	return (0);
}

int	take_forks(t_philosopher *philo)
{
	int		i;
	size_t	fork;

	i = 0;
	while (i < 2)
	{
		if (is_dead(philo))
			return (1);
		if (i == 0)
			fork = philo->l_fork;
		else
			fork = philo->r_fork;
		pthread_mutex_lock(&philo->instance->forks_mutexes[fork]);
		if (!philo->instance->forks[fork])
		{
			ft_output(philo, delta_time(philo->instance->start_time),
				TAKING_FORK);
			philo->instance->forks[fork] = 1;
			i++;
		}
		pthread_mutex_unlock(&philo->instance->forks_mutexes[fork]);
	}
	return (0);
}

int	release_forks(t_philosopher *philo)
{
	pthread_mutex_lock(&philo->instance->forks_mutexes[philo->l_fork]);
	philo->instance->forks[philo->l_fork] = 0;
	pthread_mutex_unlock(&philo->instance->forks_mutexes[philo->l_fork]);
	pthread_mutex_lock(&philo->instance->forks_mutexes[philo->r_fork]);
	philo->instance->forks[philo->r_fork] = 0;
	pthread_mutex_unlock(&philo->instance->forks_mutexes[philo->r_fork]);
	ft_output(philo, delta_time(philo->instance->start_time), SLEEPING);
	ft_usleep(philo->instance->timetosleep);
	if (is_dead(philo))
		return (1);
	ft_output(philo, delta_time(philo->instance->start_time), THINKING);
	return (0);
}

int	eat(t_philosopher *philo)
{
	ass_eat(philo);
	if (philo->instance->meals > 0 && philo->meals >= philo->instance->meals)
	{
		ft_output(philo, delta_time(philo->instance->start_time), OVER);
		pthread_mutex_lock(&philo->instance->forks_mutexes[philo->l_fork]);
		philo->instance->forks[philo->l_fork] = 0;
		pthread_mutex_unlock(&philo->instance->forks_mutexes[philo->l_fork]);
		pthread_mutex_lock(&philo->instance->forks_mutexes[philo->r_fork]);
		philo->instance->forks[philo->r_fork] = 0;
		pthread_mutex_unlock(&philo->instance->forks_mutexes[philo->r_fork]);
		philo->instance->finished++;
		if (philo->instance->finished >= philo->instance->amount)
		{
			pthread_mutex_lock(&philo->instance->write_mutex);
			pthread_mutex_unlock(&philo->instance->write_mutex);
			clear(philo->instance);
			exit(0);
		}
		return (1);
	}
	return (0);
}
