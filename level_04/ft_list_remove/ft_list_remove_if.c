/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:09:08 by trahman           #+#    #+#             */
/*   Updated: 2022/09/15 14:45:01 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{

    // Declare two pointer variable
    t_list *temp;
    t_list *curr;

    // Check if the begin_list is present & compare the begin_list data with data_ref value
    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        curr = *begin_list;
        *begin_list = (*begin_list)->next;
        free(curr);
    }

    curr = *begin_list;

    while (curr && curr->next)
    {
        if (cmp(curr->next->data, data_ref) == 0)
        {
            temp = curr->next;
            curr->next = temp->next;
            free(temp);
        }
        curr = curr->next;
    }
}
