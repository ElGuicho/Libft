/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:38:38 by gmunoz            #+#    #+#             */
/*   Updated: 2023/10/05 14:35:19 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = (void *)malloc(size * count);
	if (!ptr)
		return (NULL);
	while (i < (int)(count * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
