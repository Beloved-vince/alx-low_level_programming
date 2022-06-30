#include <stdio.h>
/**
 * Main: Checking various sizes of data type
 *
 *Return sizes after compilation
 */
int main(void)
{
char a;
int i;
long l;
long long int lli;
float f;
printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long: %lu byte(s)\n" , (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return(0);
}
