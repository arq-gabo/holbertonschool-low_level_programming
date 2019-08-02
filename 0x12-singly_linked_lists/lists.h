#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>    

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
