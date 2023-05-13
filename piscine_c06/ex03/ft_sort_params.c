/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:51:35 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/02 15:35:31 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	write (1, str, strlen);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_str_arr(char *str_tab[], int size)
{
	int	i;
	int	j;
	char *curr;

	i = 1;
	while (i < size)
	{
		curr = str_tab[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(curr, str_tab[j]) < 0)
		{
			str_tab[j + 1] = str_tab[j];
			j--;
		}
		str_tab[j + 1] = curr;
		i++;
	}
}

void	ft_print_arr(char *p_arr[], int len)
{
	int	i;

	i = 0;
	while(i < len)
	{
		ft_putstr(p_arr[i]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc > 1)
	{
		char	*my_args[argc-1];

		i = 1;
		while (i < argc)
		{
			my_args[i - 1] = argv[i];
			i++;
		}
		ft_sort_str_arr(my_args, argc - 1);
		ft_print_arr(my_args, argc - 1);
	}
}
