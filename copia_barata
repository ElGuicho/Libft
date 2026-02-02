/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:58:55 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/18 16:09:32 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		ptr[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (ptr);
}
/* int	main(void)
{
	char str[50] = "Megalovania";
	ft_memset(str, 'a', 5);
	printf("%s", str);
	return (0);
} */