/*
** EPITECH PROJECT, 2018
** lib-linked_lists
** File description:
** Basics functions of linked lists lib
*/

#include "linked_lists.h"

static void print_number(int value)
{
    char tmp;

    if (value < 0) {
        value *= -1;
        write(1, "-", 1);
    }
    if (value < 10) {
        tmp = value + '0';
        write(1, &tmp, 1);
    } else {
        print_number(value / 10);
        tmp = value % 10 + '0';
        write(1, &tmp, 1);
    }
}

static void print_lkl_rec(linked_list_t *ptr, linked_list_t *first)
{
    if (ptr != first) {
        print_lkl_rec(ptr->next, first);
        write(1, ", ", 2);
    }
    print_number(ptr->data);
}

void print_lkl(linked_list_t *ptr)
{
    if (!ptr)
        return;
    write(1, "{", 1);
    print_lkl_rec(ptr, ptr->prev);
    write(1, "}\n", 2);
}
