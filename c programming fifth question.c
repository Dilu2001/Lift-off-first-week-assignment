#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int phy,chem,bio,math,comp;
	float per;
	printf("enter five subjects marks:");
	scanf("%d%d%d%d%d,&phy,&chem,&bio,&math,&comp");
	per=(phy+chem+bio+math+comp)/5;
	if(per>=90)
	{
	 printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	elseif(per>=70)
	{
		printf("Grade C");
	}
	elseif(per>=60)
	{
	 printf("Grade D");
	}
	elseif(Per>=50)
	{ 
	   printf("Grade E");
	}
	elseif(per>=40)
	{ 
	  printf("Grade F");
	}
	return 0;
}
