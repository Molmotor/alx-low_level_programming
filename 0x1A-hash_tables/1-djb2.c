#include <hash_tables.h>

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str:string used to generate bash value
 * 
 * Return: has value
*/
unsigned long int hash_djb2(const unsined char *str)
{
    unsinged long int hash;
    int c;

    hash = 5381;
    while ((c = 'str++'))
    (
        hash = ((hash << 5) + hash) + c; /*hash* 33 + c*/
    )
}
