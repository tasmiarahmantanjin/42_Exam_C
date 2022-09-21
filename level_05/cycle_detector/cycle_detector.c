/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:20:46 by trahman           #+#    #+#             */
/*   Updated: 2022/09/20 11:34:37 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DO REFERENCE, BUT DO NOT PUSH THIS FILE
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int cycle_detector(const t_list *list)
{
    const t_list *slow;
    const t_list *fast;

    slow = list;
    fast = list;

    if (!list)
        return (0);

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            printf("Linked List contains a loop\n"); // Remove this later
            return (1);
        }
    }
    printf("No Loop in Linked List\n"); // Remove this later
    return (0);
}

int main(void)
{
    // Declare 4 node
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *node4;

    // Allowcate memory for the nodes
    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    node3 = malloc(sizeof(t_list));
    node4 = malloc(sizeof(t_list));

    // Link between nodes (Should return 1)
    // node1->next = node2;
    // node2->next = node3;
    // node3->next = node4;
    // node4->next = node1;

    // Link with NUll (should return 0)
    node1->next = NULL;

    printf("%d\n", cycle_detector(node2));
}
