/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:35:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/11 16:03:25 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int empty_check(char *av)
{
	if(!av || av[0] == '\0')
		return 0;
	return 1;
}


int check_double_signe(char *av)
{
	int i;
	int n_sign;

	i = 0;
	n_sign = 0;
	while (av[i])
	{
		if (is_sign(av[i]))
			n_sign += 1;
		i++;
	}
	if (n_sign == 1 || n_sign == 0)
		return 1;
	return 0;
}

int letters_check(char *av)
{
	int i;
	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] == '+' || av[i] == '-')
			i++;
		if ((!is_digit(av[i])) || (ft_atoi(av) == 0))
			return (0);
		i++;
	}
	return (1);
}
 
int checker(char *av)
{
	int i;

	i = 1;
	if (!av)
		return (0);
	if (!(empty_check(av)))  
		return (0);
	if (!(check_double_signe(av)))
		return (0);
	if (!(letters_check(av)))
		return (0);
	return (1);
}
