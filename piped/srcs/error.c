/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:37:05 by tbertozz          #+#    #+#             */
/*   Updated: 2022/04/28 12:00:16 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
Function to display error messages. perror() will append the error encountered
to the string input provided.
*/
void	error_func(void)
{
	perror("Error ");
	exit(EXIT_FAILURE);
}

/*
Error function used when a valid command cannot be found, outputs specifically
to error 127.
*/
void	invalid_cmd(void)
{
	ft_putstr_fd("Error : Command not found", 2);
	ft_putstr_fd("\n", 2);
	exit(127);
}

/*
Error function used when invalid argc count is encountered.
*/
void	invalid_arg(void)
{
	ft_putstr_fd("Error : Invalid arguments", 2);
	ft_putstr_fd("\n", 2);
	ft_putstr_fd("Usage - ./pipex <infile> <cmd1> <cmd2> <outfile>", 2);
	ft_putstr_fd("\n", 2);
	exit(1);
}
