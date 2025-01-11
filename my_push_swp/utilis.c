/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:46:41 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/11 12:09:47 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return i;
}

int ft_atoi(const char *str)
{
    long result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        if (sign == 1 && result > INT_MAX)
            return (0);
        if (sign == -1 && -result < INT_MIN)
            return (0);
        i++;
    }
    return ((int)(result * sign));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

void free_memory(char **split)
{
    int i = 0;
    if (!split)
        return;

    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}