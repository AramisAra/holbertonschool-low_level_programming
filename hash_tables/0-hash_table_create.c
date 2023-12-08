#include "main.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: poinyer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    hash_node_t **array;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);
    hash_table->size = size;
    array = malloc(sizeof(hash_node_t *) * size);
    if (array == NULL)
        return (NULL);
    return (hash_table);
    
}