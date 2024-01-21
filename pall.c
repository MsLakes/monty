#include "monty.h"
/**
 * f_pall - prints the stack onto the console providing a visual overview of its structure.
 * @head: head of the stack
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
