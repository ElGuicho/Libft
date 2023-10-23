/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:55:20 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/27 17:18:31 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_num(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*if0(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	return ("1");
}

static int	ifneg(int n, char *str, int j)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			str[j] = '8';
			j--;
			n = n / 10;
		}
		str[0] = '-';
		n = -n;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = if0(n);
	if (!str)
		return (NULL);
	if (str[i] == '0')
		return (str);
	j = c_num(n);
	str = (char *)malloc(j + 1);
	if (!str)
		return (NULL);
	str[j] = '\0';
	j--;
	n = ifneg(n, str, j);
	if (n == 214748364)
		j--;
	while (n > 0)
	{
		str[j--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
/* int	main(void)
{
	int i;
	char *str;

	i = 2147483647;
	str = ft_itoa(i);
	printf("%s\n", str);
	return (0);
} */