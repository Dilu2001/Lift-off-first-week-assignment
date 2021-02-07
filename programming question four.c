#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char ch;
	printf("input a character:");
	scanf("%c",&ch);
	switch(ch)
	{
		  case 'a':
		  case 'A':
		  case 'e':
		  case 'E':
		  case 'i':
		  case 'I':
		  case 'o':
		  case 'O':
		  case 'u':
		  case 'U':
		  pfintf("%c is a vowel",ch);
		  break;
		  default:
		  printf("%c is a consonant",ch);
	}
	return 0;
}
