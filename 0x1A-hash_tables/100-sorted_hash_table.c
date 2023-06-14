#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Create hash table.
 * @size: array size
 * Return: pointer to hash table or null
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;
ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
{
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ht->array[i] = NULL;
}
ht->shead = NULL;
ht->stail = NULL;
return (ht);
}

/**
 * shash_table_set - Add or update element in hash table
 * @ht: pointer to hash table
 * @key: The key to add - string not null
 * @value: value associated with key.
 * Return: 1 on success or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *tmp;
char *copied_value;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}
copied_value = strdup(value);
if (copied_value == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->shead;
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = copied_value;
return (1);
}
tmp = tmp->snext;
}

new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
{
free(copied_value);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(copied_value);
free(new_node);
return (0);
}
new_node->value = copied_value;
new_node->next = ht->array[index];
ht->array[index] = new_node;
if (ht->shead == NULL)
{
new_node->sprev = NULL;
new_node->snext = NULL;
ht->shead = new_node;
ht->stail = new_node;
}
else if (strcmp(ht->shead->key, key) > 0)
{
new_node->sprev = NULL;
new_node->snext = ht->shead;
ht->shead->sprev = new_node;
ht->shead = new_node;
}
else
{
tmp = ht->shead;
while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
tmp = tmp->snext;
new_node->sprev = tmp;
new_node->snext = tmp->snext;
if (tmp->snext == NULL)
{
ht->stail = new_node;
}
else
{
tmp->snext->sprev = new_node;
}
tmp->snext = new_node;
}
return (1);
}

/**
 * shash_table_get - getvalue linked with
 * a key in a hash table.
 * @ht: pointer to hash table
 * @key: The key to look for
 *
 * Return: NULL or the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
{
return (NULL);
}
node = ht->shead;
while (node != NULL && strcmp(node->key, key) != 0)
{
node = node->snext;
}
return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a hash table.
 * @ht: pointer the hash table
 * Description: Key/value pairs are printed in the order
 * {'Betty': 'Cool', 'python': 'awesome', 'Bob':
 * 'and Kris love asm', '98': 'Battery Street',
 * 'N': 'queens', 'c': 'fun', Asterix': 'Obelix'}
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
if (ht == NULL)
{
return;
}
node = ht->shead;
printf("{");
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->snext;
if (node != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - Print hash table in reverse order
 * @ht: pointer for sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
if (ht == NULL)
{
return;
}
node = ht->stail;
printf("{");
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->sprev;
if (node != NULL)
{
printf(", ");
}
}
printf("}\n");
}

/**
 * shash_table_delete - Delete sorted hash table
 * @ht: pointer for sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *head = ht;
shash_node_t *node, *tmp;
if (ht == NULL)
{
return;
}
node = ht->shead;
while (node)
{
tmp = node->snext;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
free(head->array);
free(head);
}
