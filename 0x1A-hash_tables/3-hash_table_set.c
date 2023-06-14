#include "hash_tables.h"

/**
 * hash_table_set - Add or update element in hash table
 * @ht: pointer to hash table
 * @key: The key to add - string not null
 * @value: value associated with key.
 * Return: 1 on success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	char *copied_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copied_value = strdup(value);
	if (copied_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copied_value;
			return (1);
		}
	}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(copied_value);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = copied_value;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
