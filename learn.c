/**
 * A program to print in an alphabetical order
 * Retur: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 * FOLLOWED BY THEIR VALUES
 */
#include <stdio.h>
#include <stdlib.h>
/* stdlib.h STAND AS A LIBRART*/
int main()
{
/** 
 * Set character with a variable
 */

 char c;
 /* Let c = a*/

 c='a';
/*
* Using While loop as long as the statement remain true 
*/
	while(c <= 'z'){
	
	printf("%d is the value of %c character \n", c, c);
	
	/* Let the count as long as the statement remains tru*/
	 c =c+1; /* similar to c+1 */
	 
	}
	exit(EXIT_SUCCESS);
}
