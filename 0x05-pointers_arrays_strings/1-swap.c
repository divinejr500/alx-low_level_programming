/*
 * File: 1-swap.c
 * Auth: Odame Emmanuel
 */

#include "main.h"

/**
 * swap_int(int *a, int *b) - swap integers
 * @n: The pointer to an int.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
