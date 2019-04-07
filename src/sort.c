/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** Sort functions
*/

#include "global.h"

static int find_lowest(linked_list_t *l_a)
{
    linked_list_t *first = l_a->next;
    int tmp = l_a->prev->data;

    while (l_a != first) {
        l_a = l_a->prev;
        if (l_a->data < tmp)
            tmp = l_a->data;
    }
    l_a = l_a->prev;
    return (l_a->data < tmp ? l_a->data : tmp);
}

static void push_numbers(linked_list_t **l_a, linked_list_t **l_b,
buffer_t *buffer, int value)
{
    linked_list_t *first = (*l_a)->next;
    int counter = 1;

    while ((*l_a) != first) {
        (*l_a) = (*l_a)->prev;
        counter++;
    }
    (*l_a) = (*l_a)->prev;
    for (int i = 0; i < counter; i++) {
        ra(l_a, l_b, buffer);
        if ((*l_a) && (*l_a)->prev && (*l_a)->prev->data == value)
            pb(l_a, l_b, buffer);
    }
}

void speed_sort(linked_list_t **l_a, linked_list_t **l_b)
{
    buffer_t buffer;

    buffer.size = 0;
    buffer.add = &add;
    buffer.print = &print;
    while (*l_a)
        push_numbers(l_a, l_b, &buffer, find_lowest(*l_a));
    while ((*l_b)->next != (*l_b)) {
        pa(l_a, l_b, &buffer);
    }
    *l_a = add_lkl_element_to_begin(*l_a, (*l_b)->prev->data);
    *l_b = remove_first_lkl_element(*l_b);
    buffer.print(&buffer, "pa\n");
}
