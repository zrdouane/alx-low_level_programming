#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct list_s - single linked list
 * @str: string
 * @len: lenght of the string
 * @next: next node
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
