/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   schedule.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:39:43 by tbertozz          #+#    #+#             */
/*   Updated: 2022/06/03 15:51:47 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	*schedule(void *varphilo)
{
	t_philosopher	*philo;

	philo = (t_philosopher *)varphilo;
	philo->last_meal = get_time();
	philo->threshold = philo->last_meal + philo->instance->timetodie;
	if (philo->position % 2)
		usleep(philo->instance->timetoeat * 500);
	while (1)
	{
		if (take_forks(philo) || eat(philo) || release_forks(philo))
		{
			break ;
		}
	}
	return (0);
}
