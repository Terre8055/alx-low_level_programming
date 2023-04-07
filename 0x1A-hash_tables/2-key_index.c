#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table array.
 *
 * @key: The key to compute the index for.
 * @size: The size of the hash table array.
 *
 * Return: The index of the key in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_val;

    hash_val = hash_djb2(key);
    return (hash_val % size);
}

