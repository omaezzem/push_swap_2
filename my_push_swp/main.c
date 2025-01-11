/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:51:40 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/11 16:58:28 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void f()
{
    system("leaks a.out");
}

void    ft_error(char *av, int ac)
{
    int i;

    i = 0;
    while (ac > 1)
    {
        if (!checker(av))
        {
            write (1,"Error\n", 6);
            exit(1);
        }
        i++;
        ac--;
    }
}

void  splity_av(char *av, int ac)
{
    int i;
    int j;
    int c_w;
    char **split;

    i = 0;
    split = ft_split(av, ' ');
    if (!split)
        return ;
    while (ac > 1 && split[i])
    {
        ft_error(av,ac);
        ac--;
        i++;
    }
    // while (split[i])
    // {
    //     if (!checker(split[i]))
    //     {
    //         write (1, "Error\n", 6);
    //         free_memory(split);
    //         exit(1);
    //     }
    //     i++;
    // }
    i = 0;
    while (split[i])
    {
        j = 0;
        if (split[i][j] == '+')
                j++;
        while (split[i][j])
        {
            write (1, &split[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    free_memory(split);
}

int main(int ac, char **av)
{
    atexit (f);
    int i;

    if (ac < 2)
    {
        write (1, "Error\n", 6);
    }
    i = 1;
    if (ac >= 2)
    {
        while (av[i])
        {
 
            splity_av(av[i], ac);
            i++;
        }
    }
}