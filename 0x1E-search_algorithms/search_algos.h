#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @f: Integer
 * @index: node of index
 * @next: pointer
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int f;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with express lane
 *
 * @f: Integer
 * @index: node of index
 * @next: pointer
 * @express: pointer to next node in express lane
 *
 * Description: singly linked list node structure with express lane
 */
typedef struct skiplist_s
{
	int f;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
