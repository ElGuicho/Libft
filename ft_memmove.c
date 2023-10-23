/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:57 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/20 12:52:11 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst && !src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, (void *)src, len));
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (len--)
		d[len] = s[len];
	return (dst);
}
/* int	main(void)
{
	char	str1[]= "Megalovania";
	char	*str2 = "Undertale";

	printf("%s", ft_memmove(str1, str2, 11));
	return (0);
} */