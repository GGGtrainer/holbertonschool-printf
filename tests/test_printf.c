#include "main.h"
#include <stdio.h>

/**
 * main - Additional tests for %d and %i
 *
 * Return: Always 0
 */
int main(void)
{
    int n = 0, neg = -100, pos = 98765, edge = -2147483648;

    _printf("Test 1: Zero -> %d\n", n);
    printf("Real : Zero -> %d\n\n", n);

    _printf("Test 2: Negative -> %i\n", neg);
    printf("Real : Negative -> %i\n\n", neg);

    _printf("Test 3: Positive -> %d\n", pos);
    printf("Real : Positive -> %d\n\n", pos);

    _printf("Test 4: Edge case (INT_MIN) -> %d\n", edge);
    printf("Real : Edge case (INT_MIN) -> %d\n\n", edge);

    return (0);
}

