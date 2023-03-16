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
	char sizeofChar;
	long int sizeofLongInt;
	long long int sizeoflongLongInt;

	printf("Size of a char:");
	printf("%u\n byte(s)", sizeof(sizeofChar));
	printf("Size of an int:");
	printf("%u\n byte(s)", sizeof(sizeofInt));
	printf("Size of a long int:");
	printf("%u\n byte(s)", sizeof(sizeofLongInt));
	printf("Size of a long long int:");
	printf("%u\n byte(s)", sizeof(sizeoflongLongInt));
	printf("Size of a float:");
	printf("%u\n byte(s)", sizeof(sizeofFloat));
}
