/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:18:04 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/17 11:33:09 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include <unistd.h>
#include <stdio.h>

void ft_putstr( char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_tool  ft_is_even( int nbr)
{
	return ((EVEN (nbr)) ? TRUE : FALSE);
}

int main( int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr (EVEN_MSG);
	else
		ft_putstr (ODD_MSG);
	return (SUCCESS);
}
