/*
** EPITECH PROJECT, 2018
** lib-linked_lists
** File description:
** Header file
*/

#ifndef LINKED_LISTS_H_
#define LINKED_LISTS_H_

#include <stdlib.h>
#include <unistd.h>

typedef struct linked_list {
    int data;
    struct linked_list *next;
    struct linked_list *prev;
} linked_list_t;

linked_list_t *add_lkl_element(linked_list_t *ptr, int value);
linked_list_t *add_lkl_element_to_begin(linked_list_t *ptr, int value);
linked_list_t *add_lkl_element_to_end(linked_list_t *ptr, int value);
linked_list_t *new_lkl(int value);
linked_list_t *remove_lkl_element(linked_list_t *ptr);
linked_list_t *remove_first_lkl_element(linked_list_t *ptr);
linked_list_t *remove_last_lkl_element(linked_list_t *ptr);
void remove_lkl(linked_list_t *ptr);
void print_lkl(linked_list_t *ptr);

#endif
