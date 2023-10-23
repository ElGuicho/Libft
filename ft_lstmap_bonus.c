/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:40:09 by gmunoz            #+#    #+#             */
/*   Updated: 2023/10/04 13:52:37 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*head;
	t_list	*new_lst;
	void	*tmp;

	if (!f || !del || !lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		new_lst = ft_lstnew(tmp);
		if (!(new_lst))
		{
			free(tmp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_lst);
		lst = lst->next;
	}
	return (head);
}

/* 
void    ft_print_result(t_list *elem)
{
        int             len;

        len = 0;
        while (((char *)elem->content)[len])
                len++;
        write(1, ((char *)elem->content), len);
        write(1, "\n", 1);
}

t_list  *ft_lstnewone(void *content)
{
        t_list  *elem;

        elem = (t_list *)malloc(sizeof(t_list));
        if (!elem)
                return (NULL);
        if (!content)
                elem->content = NULL;
        else
                elem->content = content;
        elem->next = NULL;
        return (elem);
}

void    *ft_map(void *ct)
{
        int i;
        void    *c;
        char    *pouet;

        c = ct;
        i = -1;
        pouet = (char *)c;
        while (pouet[++i])
                if (pouet[i] == 'o')
                        pouet[i] = 'a';
        return (c);
}

void    ft_del(void *content)
{
        free(content);
}

int main(int argc, const char *argv[])
{
        t_list          *elem;
        t_list          *elem2;
        t_list          *elem3;
        t_list          *elem4;
        t_list          *list;
        char            *str = strdup("lorem");
        char            *str2 = strdup("ipsum");
        char            *str3 = strdup("dolor");
        char            *str4 = strdup("sit");

        elem = ft_lstnewone(str);
        elem2 = ft_lstnewone(str2);
        elem3 = ft_lstnewone(str3);
        elem4 = ft_lstnewone(str4);
        if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
                return (0);
        elem->next = elem2;
        elem2->next = elem3;
        elem3->next = elem4;
        if (atoi(argv[1]) == 1)
        {
                if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
                        return (0);
                if (list == elem)
                        write(1, "A new list is not returned\n", 27);
                int i;
                i = 0;
                ft_print_result(list);
                while (list->next)
                {
                        list = list->next;
                        ft_print_result(list);
                        i++;
                }
        }
        return (0);
} */