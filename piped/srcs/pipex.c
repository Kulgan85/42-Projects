/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:54:38 by tbertozz          #+#    #+#             */
/*   Updated: 2022/04/28 12:00:06 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int	fd[2];
	int	process_id;

	if (argc == 5)
	{
		if (pipe(fd) == -1)
			error_func();
		process_id = fork();
		if (process_id == -1)
			error_func();
		if (process_id == 0)
			sub_process(argv, envp, fd);
		if (waitpid(process_id, NULL, WNOHANG) < 0)
			error_func();
		main_process(argv, envp, fd);
	}
	else if (argc != 5)
		invalid_arg();
	return (0);
}
