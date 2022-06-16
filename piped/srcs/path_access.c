/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_access.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:47:25 by tbertozz          #+#    #+#             */
/*   Updated: 2022/04/28 12:02:16 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
Function breaks down the "PATH=" line from the **envp argument and the command
received from the **argv argument received from the main file and tries to
determine if the command can be properly accessed using all the possible
paths in the PATHS str double array. 

If the commands are not valid, it will pass to the invalid_cmd() function to 
return an error.
*/
char	*path_access(char **env_paths, char *cmd)
{
	int		index;
	char	*temp_path;
	char	*exe_path;

	index = 0;
	while (env_paths[index])
	{
		temp_path = ft_strjoin(env_paths[index], "/");
		exe_path = ft_strjoin(temp_path, cmd);
		free(temp_path);
		if (access(exe_path, F_OK) == 0)
			return (exe_path);
		free (exe_path);
		index++;
	}
	invalid_cmd();
	return (0);
}
