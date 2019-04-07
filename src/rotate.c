/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** sort functions
*/

#include "global.h"

void ra(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    if ((*l_a) && (*l_a)->prev)
        *l_a = (*l_a)->prev;
    buffer->add(buffer, "ra ");
}

void rb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    if ((*l_b) && (*l_b)->prev)
        *l_b = (*l_b)->prev;
    buffer->add(buffer, "rb ");
}

void rr(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    if ((*l_a) && (*l_a)->prev)
        *l_a = (*l_a)->prev;
    if ((*l_b) && (*l_b)->prev)
        *l_b = (*l_b)->prev;
    buffer->add(buffer, "rr ");
}
