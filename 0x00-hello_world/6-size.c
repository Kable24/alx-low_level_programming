#include<stdio.h>
/**
 *main - print the size of ints
 *Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu byte\n", sizeof(intType));
printf("Size of a long int: %zu byte\n", sizeof(longintType));
printf("Size of a long long int: %zu byte\n", sizeof(longlongintType));
printf("Size of a float: %zu byte\n", sizeof(floatType));

return (0);
}
