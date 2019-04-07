/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** sort functions
*/

#include "global.h"

static void s(linked_list_t *list)
{
    int tmp;

    if (!list || list->prev == list->prev->prev)
        return;
    tmp = list->prev->prev->data;
    list->prev->prev->data = list->prev->data;
    list->prev->data = tmp;
}

void sa(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    s(*l_a);
    buffer->add(buffer, "sa ");
}

void sb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    s(*l_b);
    buffer->add(buffer, "sb ");
}

void sc(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer)
{
    s(*l_a);
    s(*l_b);
    buffer->add(buffer, "sc ");
}
