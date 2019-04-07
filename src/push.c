/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** sort functions
*/

#include "global.h"

void pa(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    if (*l_b) {
        if (!*l_a)
            *l_a = new_lkl((*l_b)->prev->data);
        else
            *l_a = add_lkl_element_to_begin(*l_a, (*l_b)->prev->data);
        *l_b = remove_first_lkl_element(*l_b);
    }
    buffer->add(buffer, "pa ");
}

void pb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    if (*l_a) {
        if (!*l_b)
            *l_b = new_lkl((*l_a)->prev->data);
        else
            *l_b = add_lkl_element_to_begin(*l_b, (*l_a)->prev->data);
        *l_a = remove_first_lkl_element(*l_a);
    }
    buffer->add(buffer, "pb ");
}
