#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *back, *next;

if (*head == NULL || head == NULL)
return (NULL);

if ((*head)->next == NULL)
return (*head);

back = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = back;
back = *head;
*head = next;
}
*head = back;
return (*head);
}
