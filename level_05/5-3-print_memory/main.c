/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 20:36:22 by angavrel          #+#    #+#             */
/*   Updated: 2022/09/15 15:15:50 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_memory(const void *addr, size_t size);

// int main(void)
// {
//     int tab[15] = {3772900067, 58597, 59111,
//                    59625, 60139, 60653, 61167, 61681, 62195, 62709, 63223, 63737, 64251,
//                    64765, 65279};

//     print_memory(tab, sizeof(tab));
//     return (0);
// }

int main(void)
{
    int tab[10] = {0, 23, 150, 255,
                   12, 16, 21, 42};

    print_memory(tab, sizeof(tab));
    return (0);
}