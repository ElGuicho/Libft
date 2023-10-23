/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:55:05 by gmunoz            #+#    #+#             */
/*   Updated: 2023/09/27 16:06:03 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*iflen(const char *s, unsigned int start, size_t len)
{
	char	*subs;

	if (start >= ft_strlen(s))
	{
		subs = (char *)malloc(1);
		if (!subs)
			return (NULL);
	}
	else if (len > ft_strlen(s) - start)
	{
		subs = (char *)malloc((ft_strlen(s) - start) + 1);
		if (!subs)
			return (NULL);
	}
	else
	{
		subs = (char *)malloc(len + 1);
		if (!subs)
			return (NULL);
	}
	return (subs);
}

static char	*m_s(const char *s, char *subs, unsigned int start, size_t len)
{
	int	i;

	i = 0;
	while (len > 0 && s[start] != '\0')
	{
		subs[i] = s[start];
		i++;
		start++;
		len--;
	}
	subs[i] = '\0';
	return (subs);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	subs = iflen(s, start, len);
	if (subs == NULL)
		return (NULL);
	if (len == 0 || s[i] == '\0' || start > ft_strlen(s))
	{
		subs[0] = '\0';
		return (subs);
	}
	m_s(s, subs, start, len);
	return (subs);
}
/* int main(void)
{
	char	*s;
	char	*subs;

	s = "";
	subs = ft_substr(s, 0, 0);
	printf("%s\n", subs);
	return (0);
} */