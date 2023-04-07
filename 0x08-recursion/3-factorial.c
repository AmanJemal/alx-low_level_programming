#include "main.h"
/**
 * factorial - A function that returns factorial of a given number.
 * @n: input integer number.
 * Return: Factorial number.
*/
int factorial(int n)
{
    if (n < 0)
        return (-1);
    else if (n == 0)
        return (1);
    else
        return (n * factorial(n - 1));                
} 