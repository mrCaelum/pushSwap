/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** __DESCRIPTION__
*/

#ifndef GLOBAL_H_
    #define GLOBAL_H_
    
    #include "linked_lists.h"
    #include "buffer.h"

    #define PRINT_HELP USAGE DESC
    #define USAGE "USAGE\n\t./pushswap [list]\n"
    #define DESC "DESCRIPTION\n\tlist: list of numbers to sort\n"
    #define HELP_SIZE 69
    
    void sa(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void sb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void sc(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void pa(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void pb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void ra(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void rb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void rr(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void rra(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void rrb(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void rrr(linked_list_t **l_a, linked_list_t **l_b, buffer_t *buffer);
    void speed_sort(linked_list_t **l_a, linked_list_t **l_b);
#endif
