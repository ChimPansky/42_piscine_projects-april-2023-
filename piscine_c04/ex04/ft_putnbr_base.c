/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:08:54 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 13:22:57 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_get_order(int nb, int base)
{
	if (nb / base != 0)
		return (1 + ft_get_order(nb / base, base));
	else
		return (1);
}

int	ft_power(int base, int exponent)
{
	int	i;
	int	result;

	i = 2;
	result = base;
	if (exponent == 0)
		return (1);
	else if (exponent < 0)
		return (0);
	else
	{
		while (i >= 2 && i <= exponent)
		{
			result *= base;
			i++;
		}
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	ascii_set[128];
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 1)
		return (0);
	while (i++ <= 128)
		ascii_set[i - 1] = 0;
	i = 0;
	while (i < base_len)
	{
		if (ascii_set[(int)base[i]] || base[i] == '-' || base [i] == '+')
			return (0);
		else
			ascii_set[(int)base[i]] = 1;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		ord;
	int		i;
	char	res[64];

	i = 0;
	if (ft_check_base(base))
	{
		len = ft_strlen(base);
		ord = ft_get_order(nbr, len);
		if (nbr < 0)
		{
			res[i++] = '-';
			nbr *= -1;
		}
		while (ord > 0)
		{
			if (nbr < 0)
				res[i++] = base[-1 * nbr / ft_power(len, ord-- -1) % len];
			else
				res[i++] = base[nbr / ft_power(len, ord-- -1) % len];
		}
		res[i] = '\0';
		write(1, res, i);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-255, "0123456789abcdef");
	write(1, "\n\n", 1);
	ft_putnbr_base(10234, "abcdefghij");
	write(1, "\n\n", 1);
	ft_putnbr_base(-1063, "01");
	write(1, "\n\n", 1);
	ft_putnbr_base(-1063, "ab");
	write(1, "\n\n", 1);
	ft_putnbr_base(2147483647, "01");
	write(1, "\n\n", 1);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n\n", 1);
	return (0);
}
*/
