#include "lists.h"
/**
 * print_list - collect nm of nodes
 * @h: is the node head
 * Return: the count of nodes.
*/
size_t print_list(const list_t *h)
{
         size_t count = 0;
  
          while (h != NULL)
          {
          if (h->str == NULL)
                  printf("[%d] %s\n", 0, h->str);
          else
                  printf("[%d] %s\n", h->len, h->str);
  
          count++;
          h = h->next;
          }
  
          return (count);
}
