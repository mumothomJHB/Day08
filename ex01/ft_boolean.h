/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:04:34 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/17 11:15:42 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an even number of arguments.\n"
#define EVEN(nbr) (nbr % 2 == 0)

typedef enum e_bool 
{
	TRUE = 0,
	FALSE = 1
}

t_tool;

#endif
