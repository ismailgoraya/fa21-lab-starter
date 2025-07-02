#ifndef LL_CYCLE_H
#define LL_CYCLE_H

#include <stdbool.h>

typedef struct node {
    int value;
    struct node *next;
} node;

bool ll_has_cycle(node *head);

#endif // LL_CYCLE_H
