#inlude "lists.h"
/**
 * insert_nodeint_at_index - adds a new node t o a linked list
 *
 * @head: pointer to the head of te list
 * @idx: index of the list where the new node wil be added
 * 	(indices start a 0)
 * @n: value for the newnode to be added
 * retrun; pointer to the new node,
 * 	or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tep = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

for (node = 0; node < (idx - 1); node++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
