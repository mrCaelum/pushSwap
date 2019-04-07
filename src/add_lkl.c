/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** Functions to add elements or linked lists
*/

#include "linked_lists.h"

linked_list_t *add_lkl_element(linked_list_t *ptr, int value)
{
    linked_list_t *ptr_new_element = malloc(sizeof(linked_list_t));

    if (!ptr_new_element)
        return (NULL);
    if (ptr) {
        ptr_new_element->next = ptr;
        ptr_new_element->prev = ptr->prev;
        ptr->prev->next = ptr_new_element;
        ptr->prev = ptr_new_element;
    } else {
        ptr_new_element->next = ptr_new_element;
        ptr_new_element->prev = ptr_new_element;
    }
    ptr_new_element->data = value;
    return (ptr_new_element);
}

linked_list_t *add_lkl_element_to_begin(linked_list_t *ptr, int value)
{
    return (add_lkl_element(ptr, value)->next);
}

linked_list_t *add_lkl_element_to_end(linked_list_t *ptr, int value)
{
    return (add_lkl_element(ptr, value));
}

linked_list_t *new_lkl(int value)
{
    return (add_lkl_element(NULL, value));
}
