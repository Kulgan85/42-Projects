/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:51:47 by tbertozz          #+#    #+#             */
/*   Updated: 2022/04/21 10:52:08 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
Function used to parse the **envp arguments from the main function and
retrieve the PATH line

Places all possible listed paths in the PATH line into a string double array.
*/
char	**find_path(char **envp)
{
	int		index;
	char	**paths;

	index = 0;
	while (ft_strncmp(envp[index], "PATH=", 5) != 0)
		index++;
	paths = ft_split(envp[index] + 5, ':');
	return (paths);
}
