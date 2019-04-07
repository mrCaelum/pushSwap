/*
** EPITECH PROJECT, 2018
** lib-linked_lists
** File description:
** Functions to remove elements or linked lists
*/

#include "linked_lists.h"

linked_list_t *remove_lkl_element(linked_list_t *ptr)
{
    linked_list_t *tmp_ptr;

    if (!ptr || !ptr->next)
        return (NULL);
    if (ptr == ptr->next && ptr == ptr->prev) {
        free(ptr);
        return (NULL);
    }
    tmp_ptr = ptr->next;
    ptr->prev->next = tmp_ptr;
    tmp_ptr->prev = ptr->prev;
    free(ptr);
    return (tmp_ptr);
}

linked_list_t *remove_first_lkl_element(linked_list_t *ptr)
{
    return (remove_lkl_element(ptr->prev));
}

linked_list_t *remove_last_lkl_element(linked_list_t *ptr)
{
    return (remove_lkl_element(ptr));
}

void remove_lkl(linked_list_t *ptr)
{
    linked_list_t *current_element;

    if (!ptr)
        return;
    ptr->prev->next = NULL;
    current_element = ptr->next;
    while (ptr) {
        current_element = ptr->next;
        free(ptr);
        ptr = current_element;
    }
}
