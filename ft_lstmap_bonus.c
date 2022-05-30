/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:33:45 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/24 15:24:50 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mdflist;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	mdflist = ft_lstnew(f(lst->content));
	if (!mdflist)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	tmp = mdflist;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&mdflist, ft_lstnew(f(lst->content)));
		if (!mdflist->next)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (mdflist);
}
