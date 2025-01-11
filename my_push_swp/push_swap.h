/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:46:47 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/11 12:10:38 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>


int		is_digit(char c);
int		is_sign(char c);
int		checker(char *av);
char	**ft_split(char const *s, char c);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		count_str(char *str, char c);
void	free_memory(char **split);

#endif