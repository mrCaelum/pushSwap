/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** Buffer functions
*/

#include "buffer.h"
#include <unistd.h>

void add(buffer_t *self, char const *str)
{
    int size = 0;

    while (str[size] != 0)
        size++;
    if (self->size + size > BUFFER_SIZE) {
        write(1, self->str, self->size);
        self->size = 0;
    }
    for (int i = 0; i < size; i++)
        self->str[self->size + i] = str[i];
    self->size += size;
}

void print(buffer_t *self, char const *str)
{
    add(self, str);
    write(1, self->str, self->size);
}
