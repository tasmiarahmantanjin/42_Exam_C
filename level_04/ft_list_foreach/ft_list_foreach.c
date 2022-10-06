/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 22:15:57 by tasmia           #+#    #+#             */
/*   Updated: 2022/09/07 10:41:32 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *curr;

    curr = begin_list;
    while (curr)
    {
        (*f)(curr->data);
        curr = curr->next;
    }
}

// Main For testing
void print_data(void *data)
{
    printf("%s\n", data);
    // printf("%s\n", (void *)data); // to turn off error to warn
}

int main(void)
{
    t_list *test_list = malloc(sizeof(t_list));
    test_list->data = "what up";
    test_list->next = malloc(sizeof(t_list));
    test_list->next->data = "42";
    test_list->next->next = malloc(sizeof(t_list));
    test_list->next->next->data = "peeps?";
    test_list->next->next->next = NULL;

    ft_list_foreach(test_list, print_data);
    return (0);
}