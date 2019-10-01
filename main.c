#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* practice 1  
	
	int input;
	
	printf("input a number : ");
	scanf("%d", &input);
	
	if(input > 0)
		printf("positive\n");
	else
		printf("non-positive\n"); */
		
	/* practice 2 */
	
	int a;
	
	printf("input a number: ");
	scanf("%d", &a);
	
	if(a > 0)
		printf("|x| = %d\n", a);
	else 
		printf("|x| = %d\n", -a);
	
	
	
	
	return 0;
}
