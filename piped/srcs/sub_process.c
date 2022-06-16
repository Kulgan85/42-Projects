/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:55:23 by tbertozz          #+#    #+#             */
/*   Updated: 2022/04/28 11:21:57 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
The sub_process is used to handle the read end of the pipex function.

open() accesses the input file and establishes it as a new file descriptor.
dup2() is used to swap the file descriptors from the initial pipe() function
to the newly made file descriptor with the open() function previously mentioned.

It is necessary to use the close() function to end accessing finished/unwanted
file descriptors so that other functions requiring inputs from 
file descriptors will not be waiting on these and would therefore
not be able to finish the process.

After breaking down the envp input and argv inputs, it is passed to the 
execve() function which attempts to create a new process using the paths and
commands with possible arguments/flags.
*/
void	sub_process(char **argv, char **envp, int *fd)
{
	int		filein;
	char	*exe_path;
	char	**env_path;
	char	**cmd_split;

	filein = open(argv[1], O_RDONLY);
	if (dup2(fd[1], STDOUT_FILENO) < 0)
		error_func();
	close(fd[1]);
	if (dup2(filein, STDIN_FILENO) < 0)
		error_func();
	close(fd[0]);
	close(filein);
	env_path = find_path(envp);
	cmd_split = ft_split(argv[2], ' ');
	exe_path = path_access(env_path, cmd_split[0]);
	if (execve(exe_path, cmd_split, envp) == -1)
		error_func();
}
