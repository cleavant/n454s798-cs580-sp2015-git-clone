/*

	Kim Lim
	N454S798
	Program #1
	pgm2_8.c

Function: strtonum , main
	  This program covert a set of string of numerals to an integer.
Input 	: Entered by user - (set of numerals).
Output 	: Set of integer from the strings entered.
Return 	: 0

Pseudo Code:
	StrToNum:
		If (input = NULL)
			Return 0 to main.
		Else
			Convert the strings to integer and return back to the funchtion
			and continue converting the next character.
	End StrToNum and return the answer.

	Main:
		Prompt to enter a set of strings of numerical.
		Pass the input to the function to convert the strings.
		Display the integer .
	End Main.

*/

#include <stdio.h>
#include <string.h>

int StrToNum (char *num , int ans)
{
	if(*num == '\0')
		return ans;
		// Return ans if there is no more strings of numeric to convert.

	else
		return strtonum (num + 1 , ans * 10 + *num - '0') ;
		// Converting the string by checking the ASCII table.
}
// Fuction for converting the strings into integer.

int main()
{
	int ans ;
	char num [50] ;
	// Declare a memory for the strings

	printf("Enter a string of numerals: ") ;
	scanf("%s", &num) ;
	// Prompt for input.

	ans = StrToNum(num , 0) ;
	// Send the inputs to the function.

	printf("%s converted to a number is %d\n", num , ans) ;
	getchar();

	return 0;
}
