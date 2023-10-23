/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:20:45 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/20 13:30:09 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	int		i;
	char	*cpy;

	count = 0;
	i = 0;
	while (s1[count] != '\0')
		count++;
	cpy = (char *)malloc(count + 1);
	if (!cpy)
		return (NULL);
	while (i < count + 1)
	{
		cpy[i] = s1[i];
		i++;
	}
	return (cpy);
}
