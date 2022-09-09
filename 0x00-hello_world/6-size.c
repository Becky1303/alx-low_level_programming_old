#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
   char m;
   int a;
   long int y;
   long long int o;
   float w;
   printf("Size of a char: %lu byte(s)\n",
	 (unsigned long)sizeof(m));
   printf("Size of an int: %lu byte(s)\n",
 	 (unsigned long)sizeof(a));
   printf("Size of a long int: %lu byte(s)\n",
	 (unsigned long)sizeof(y));
   printf("Size of a long long int: %lu byte(s)\n",
	 (unsigned long)sizeof(o));
   printf("Size of a float: %lu byte(s)\n",
	 (unsigned long)sizeof(w));
	return (0);
}

