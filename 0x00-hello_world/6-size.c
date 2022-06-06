#include<stdio.h>
int main(void)
/**
 *main - the size of int
 *Return: Always 0 (Success)
 */
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu byte\n", sizeof(intType));
printf("Size of long int: %zu byte\n", sizeof(longintType));
printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu byte\n", sizeof(floatType));

return (0);
}
