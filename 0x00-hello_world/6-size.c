#include<stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int sizeofInt;
	float sizeofFloat;
	double sizeofDouble;
	char sizeofChar;

	printf("Size of int:");
	printf("%u\n", sizeof(sizeofInt));
	printf("Size of float:");
	printf("%u\n", sizeof(sizeofFloat));
	printf("Size of double:");
	printf("%u\n", sizeof(sizeofDouble));
	printf("Size of char:");
	printf("%u\n", sizeof(sizeofChar));
}
