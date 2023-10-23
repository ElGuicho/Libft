/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:37:50 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/25 17:16:08 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack && len > 0)
	{
		j = 0;
		i = len;
		while (needle[j] != '\0' && (haystack[j] == needle[j]) && i > 0)
		{
			if (needle[j + 1] == '\0' && (haystack[j] == needle[j]))
				return ((char *)haystack);
			j++;
			i--;
		}
		haystack++;
		len--;
	}
	return (0);
}
/* int	main(void)
{
	char *str = "Megalovania by Toby Fox";
	char *find = "vania";
	printf("%s", ft_strnstr(str, find, 11));
	return (0);
} */