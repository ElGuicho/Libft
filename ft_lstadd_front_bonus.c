/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:20:25 by gmunoz            #+#    #+#             */
/*   Updated: 2023/10/04 13:53:13 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* int main(void)
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("hola");
	new = ft_lstnew("adios");
	ft_lstadd_front(&head, new);
	printf("%s", head->content);
	return (0);
} */