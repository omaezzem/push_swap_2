#include "push_swap.h"

// int integer_range(int av)
// {
// 	if ((av <= INT_MAX) && (av >= INT_MIN))
// 		return 1;
// 	return 0;
// }

// int check_double_signe(char *av)
// {
// 	int i;
// 	int n_sign;

// 	i = 0;
// 	n_sign = 0;
// 	while (av[i])
// 	{
// 		if (is_sign(av[i]))
// 			n_sign += 1;
// 		i++;
// 	}
// 	if (n_sign == 1 || n_sign == 0)
// 		return 1;
// 	return 0;
// }

int letters_check(char *av)
{
	int i;
	i = 0;
	while (av[i] != '\0')
	{
		if ((!is_digit(av[i])) || (ft_atoi(av) == 0))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    int at = letters_check("-1");
    printf("%d\n", at);
}