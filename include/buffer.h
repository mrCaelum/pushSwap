/*
** EPITECH PROJECT, 2018
** CPE_pushswap-2018
** File description:
** Buffer functions header
*/

#ifndef BUFFER_H_
#define BUFFER_H_

#define BUFFER_SIZE 4096

typedef struct buffer buffer_t;

struct buffer {
    int size;
    char str[BUFFER_SIZE];
    void (*add)(buffer_t *self, char const *str);
    void (*print)(buffer_t *self, char const *str);
};

void add(buffer_t *self, char const *str);
void print(buffer_t *self, char const *str);

#endif
