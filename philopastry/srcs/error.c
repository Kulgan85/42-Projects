/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:52:53 by tbertozz          #+#    #+#             */
/*   Updated: 2022/06/03 15:06:59 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	ft_output(t_philosopher	*philo, long timestamp, int action)
{
	pthread_mutex_lock(&philo->instance->write_mutex);
	if (action == TAKING_FORK)
		printf("%lums %zu took fork\n", timestamp, philo->position);
	else if (action == EATING)
		printf("%lums %zu consumes all\n", timestamp, philo->position);
	else if (action == SLEEPING)
		printf("%lums %zu sleeps soundly\n", timestamp, philo->position);
	else if (action == THINKING)
		printf("%lums %zu thinks about death\n", timestamp, philo->position);
	else if (action == DIED)
		printf("%lums %zu fell and couldn't get up\n",
			timestamp, philo->position);
	else if (action == OVER)
		printf("%lums %zu finished consuming\n", timestamp, philo->position);
	pthread_mutex_unlock(&philo->instance->write_mutex);
}

int	ft_error(int error)
{
	if (error == WRONG_ARG)
		printf("Error: Wrong argument input\n");
	else if (error == ARG_NUMBER)
		printf("Error: Incorrect number of arguments\n");
	else if (error == MALLOC_ERROR)
		printf("Error: Malloc failure\n");
	else if (error == PTHREAD_ERROR)
		printf("Error: PThread failure\n");
	return (1);
}
