/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:39:00 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/21 12:24:44 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	ptr = 0;
	i = 0;
	if (c == '\0')
	{
		ptr = (char *)&str[ft_strlen(str)];
		return (ptr);
	}
	while (str[i] != '\0')
	{
		if (str[i] == (const char)c)
			ptr = (char *)&str[i];
		if (str[i + 1] == '\0' && (const char)c == '\0')
			ptr = (char *)&str[i + 1];
		i++;
	}
	if (ptr == 0)
		return (0);
	else
		return (ptr);
}
/* int main(void)
{
	char *str = "Megalovania by Toby Fox";
	char find = 'z';
	printf("%s", ft_strrchr(str, find));
	return (0);
} */