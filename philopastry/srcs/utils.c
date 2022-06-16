/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:26:43 by tbertozz          #+#    #+#             */
/*   Updated: 2022/06/03 15:07:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	ft_atol(const char *string, size_t *dst)
{
	int	i;

	i = 0;
	if (string[i] == '\0')
		return (1);
	*dst = 0;
	while (string[i] && string [i] >= '0' && string[i] <= '9')
	{
		*dst = *dst * 10 + (string[i] - '0');
		i++;
	}
	if (string[i] != '\0')
		return (1);
	return (0);
}

size_t	get_time(void)
{
	static struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

void	ft_usleep(size_t ms)
{
	size_t	end;

	end = get_time() + ms;
	while (get_time() < end)
		usleep(ms / 1000);
}

long	delta_time(long time)
{
	if (time > 0)
		return (get_time() - time);
	return (0);
}

void	ass_eat(t_philosopher *philo)
{
	philo->eating = 1;
	philo->last_meal = get_time();
	ft_output(philo, delta_time(philo->instance->start_time), EATING);
	ft_usleep(philo->instance->timetoeat);
	philo->threshold = philo->last_meal + philo->instance->timetodie;
	philo->eating = 0;
	philo->meals += 1;
}
