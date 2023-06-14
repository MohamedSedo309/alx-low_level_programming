#include "hash_tables.h"

/**
 * key_index - get the index of the key
 * @key: key to get its index
 * @size: The size of array of hash table
 *
 * Return: ndex of the key
 *
 * Description: Uses the hash_djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
