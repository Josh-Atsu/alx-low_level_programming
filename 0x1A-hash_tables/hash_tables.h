#ifndef _HASH_TABLES_H
#define _HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - node of a hash table
 *
 * @key: the key, string
 * The key is unique in the HashTable
 * @value: value corresponding to a key
 * @next: pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash Table data structure
 *
 * @size: size of the array
 * @array: array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * bacause we want our hashtable to use a chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Defining all function prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);



#endif /* hast_table.h */
