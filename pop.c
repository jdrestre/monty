#include "monty.h"

/**
 * simple_pop - the opcode pop removes the top element of the stack
 * @stack: address to pointer to top of the stack
 */
void simple_pop(stack_t **stack)
{
	stack_t *tmp;

	if ((*stack)->next)
	{
		tmp = (*stack)->next;
		free(*stack);
		(*stack) = tmp;
		(*stack)->prev = NULL;
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
