/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:27:13 by trahman           #+#    #+#             */
/*   Updated: 2022/09/15 15:50:01 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// YOU SHOULD NOT PUSH THIS FILE

#ifndef LIST_H
#define LIST_H

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

#endif