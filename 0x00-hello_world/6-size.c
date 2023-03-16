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
	printf("%u byte(s)\n", sizeof(sizeofChar));
	printf("Size of an int:");
	printf("%u byte(s)\n", sizeof(sizeofInt));
	printf("Size of a long int:");
	printf("%u byte(s)\n", sizeof(sizeofLongInt));
	printf("Size of a long long int:");
	printf("%u byte(s)\n", sizeof(sizeoflongLongInt));
	printf("Size of a float:");
	printf("%u byte(s)\n", sizeof(sizeofFloat));
}
