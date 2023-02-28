/*
 * File: 1-swap.c
 * Auth: Odame Emmanuel
 */

#include "main.h"

/**
 * swap_int(int *a, int *b) - Takes a pointer to an int and updates
 *               the value it points to to 98.
 * @n: The pointer to an int.
 */
void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
