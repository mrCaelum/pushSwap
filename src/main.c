/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** Main file
*/

#include "global.h"

static int get_arg(char const *arg)
{
    int result = 0;
    int neg = 0;

    for (int i = 0; arg[i]; i++) {
        if (i == 0 && arg[i] == '-')
            neg++;
        else
            result = result * 10 + arg[i] - '0';
    }
    return (neg ? -result : result);
}

static linked_list_t *fill_list(int argc, char const *argv[])
{
    linked_list_t *list;

    if (argc < 2)
        return (NULL);
    list = new_lkl(get_arg(argv[1]));
    for (int i = 2; i < argc; i++) {
        list = add_lkl_element(list, get_arg(argv[i]));
    }
    return (list);
}

static int is_sorted(linked_list_t *list)
{
    linked_list_t *end = list->prev;

    while (list != end) {
        if (list->data < list->next->data)
            return (0);
        list = list->next;
    }
    return (1);
}

int main(int argc, char const *argv[])
{
    linked_list_t *l_a = fill_list(argc, argv);
    linked_list_t *l_b = NULL;

    if (argc == 2 && argv[1][0] == '-' && ((argv[1][1] == 'h' && !argv[1][2])
    || (argv[1][1] == '-' && argv[1][2] == 'h' && argv[1][3] == 'e' &&
    argv[1][4] == 'l' && argv[1][5] == 'p' && !argv[1][6]))) {
        write(1, PRINT_HELP, HELP_SIZE);
        return (0);
    }
    if (argc < 2)
        return (84);
    if (is_sorted(l_a))
        write(1, "\n", 1);
    else
        speed_sort(&l_a, &l_b);
    remove_lkl(l_a);
    remove_lkl(l_b);
    return (0);
}
