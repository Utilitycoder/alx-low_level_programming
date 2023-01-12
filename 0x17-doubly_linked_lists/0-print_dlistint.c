#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h) {
    size_t count = 0;
    const dlistint_t *current = h;
    while (current) {
        printf("%d\n", current->n);
        current = current->next;
        count++;
    }
    return count;
}
