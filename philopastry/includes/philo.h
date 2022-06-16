/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:08:42 by tbertozz          #+#    #+#             */
/*   Updated: 2022/06/03 15:28:32 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>

# define WRONG_ARG -1
# define ARG_NUMBER -2
# define MALLOC_ERROR -3
# define PTHREAD_ERROR -4

struct	s_main;

typedef enum e_action
{
	TAKING_FORK,
	EATING,
	SLEEPING,
	THINKING,
	DIED,
	OVER,
}				t_action;

typedef struct s_philosopher
{
	size_t			position;
	size_t			l_fork;
	size_t			r_fork;
	size_t			meals;
	size_t			eating;
	size_t			last_meal;
	size_t			threshold;
	struct s_main	*instance;
}				t_philosopher;

typedef struct s_main
{
	long			start_time;
	size_t			amount;
	size_t			timetoeat;
	size_t			timetodie;
	size_t			timetosleep;
	size_t			meals;
	size_t			finished;
	t_philosopher	*philosophers;
	int				*forks;
	pthread_mutex_t	write_mutex;
	pthread_mutex_t	*forks_mutexes;
	pthread_mutex_t	die_mutex;
}	t_main;

int			ft_atol(const char *string, size_t *dst);
void		ft_output(t_philosopher *philo, long timestamp, int action);
size_t		get_time(void);
void		*schedule(void *vphilo);
int			start(t_main *instance);
int			take_forks(t_philosopher *philo);
int			eat(t_philosopher *philo);
int			release_forks(t_philosopher *philo);
void		ft_usleep(size_t ms);
int			ft_error(int error);
long		delta_time(long time);
void		ass_eat(t_philosopher *philo);
int			clear(t_main *instance);

#endif
