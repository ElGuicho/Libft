/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:13:30 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/22 14:56:23 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			j;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	j = 0;
	if (n == 0)
		return (0);
	while ((j < n) && (ptr1[j] == ptr2[j]))
		j++;
	if (j == n)
		j--;
	return (ptr1[j] - ptr2[j]);
}
/* int main()
{
	char *s1 = "Megalovania";
	char *s2 = "Megalovania";
	printf("%d", ft_memcmp(s1, s2, 10));
	return (0);
} */