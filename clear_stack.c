#include "monty.h"

/**
 * clear_stack - clears stack into double linked list
 * @h: pointer to top of stack
 */
void clear_stack(stack_t **h)
{
	while (*h)
		simple_pop(h);
}
