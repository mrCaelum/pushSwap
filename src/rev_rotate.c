/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** sort functions
*/

#include "global.h"

void rra(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    *l_a = (*l_a)->next;
    buffer->add(buffer, "rra ");
}

void rrb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    *l_b = (*l_b)->next;
    buffer->add(buffer, "rrb ");
}

void rrr(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    *l_a = (*l_a)->next;
    *l_b = (*l_b)->next;
    buffer->add(buffer, "rrr ");
}
