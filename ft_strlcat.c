/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:00:21 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/22 13:44:02 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = ft_strlen(dst);
	j = 0;
	k = ft_strlen(src);
	l = ft_strlen(dst);
	if (dstsize <= l)
		return (k + dstsize);
	while (src[j] != '\0' && j < dstsize - l - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != 0 || l < dstsize)
		dst[i] = '\0';
	return (k + l);
}
/* int main()
{
	char dst[10] = "a";
	printf("%zu", ft_strlcat(dst, "lorem ipsum dolor sit amet", 0));
	return (0);
} */