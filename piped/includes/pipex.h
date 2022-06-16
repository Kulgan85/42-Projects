/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:56:47 by tbertozz          #+#    #+#             */
/*   Updated: 2022/04/28 11:09:52 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <stdio.h>
# include <string.h>
# include "../libft/libft.h"

void		sub_process(char **argv, char **envp, int *fd);
void		main_process(char **argv, char **envp, int *fd);
char		**find_path(char **envp);
char		*path_access(char **env_paths, char *cmd);
void		error_func(void);
void		invalid_cmd(void);
void		invalid_arg(void);

#endif
