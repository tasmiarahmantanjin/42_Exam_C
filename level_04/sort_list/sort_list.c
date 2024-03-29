/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 11:34:10 by trahman           #+#    #+#             */
/*   Updated: 2022/10/06 14:48:19 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *curr;

	curr = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;

			lst = curr;
		}
		else
			lst = lst->next;
	}
	lst = curr;
	return (lst);
}

// Main for test the sort_list.c Function

t_list *add_int(t_list *list, int nb)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = nb;
	new->next = list;
	return (new);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main(void)
{
	t_list *list;

	list = NULL;
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = add_int(list, 4);
	list = add_int(list, 1);
	list = add_int(list, 89);
	list = add_int(list, 21);
	list = sort_list(list, &ascending);

	while (list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}

	return (0);
}
