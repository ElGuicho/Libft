/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:47:03 by gmunoz            #+#    #+#             */
/*   Updated: 2023/10/04 13:52:28 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	if (content == NULL)
		head->content = NULL;
	else
		head->content = (void *)content;
	head->next = NULL;
	return (head);
}
/* int	main(void)
{
	t_list	*lst;
	void	*content;

	content = "hahaha";
	lst = ft_lstnew(content);
	printf("lst->content: %s\n", lst->content);
	return (0);
} */