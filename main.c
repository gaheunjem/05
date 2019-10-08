#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* // practice 1  
	
	int input;
	
	printf("input a number : ");
	scanf("%d", &input);
	
	if(input > 0)
		printf("positive\n");
	else
		printf("non-positive\n"); 
		
	// practice 2 
	
	int a;
	
	printf("input a number: ");
	scanf("%d", &a);
	
	if(a > 0)
		printf("|x| = %d\n", a);
	else 
		printf("|x| = %d\n", -a); 
		
	// practice 3
	
	int b;
	
	printf("input a number : ");
	scanf("%d", &b);
	
	if(b > 0)
		printf("positive\n");
	else if(b < 0)
		printf("negative\n");
	else
		printf("zero"); 
		
	// project 4
	
	int i=0, meter;
	
	while(i<3)
	{
		meter = i*1609;
		printf("%d mile is %d m\n", i, meter);
		i++;
	} 
	
	// project 5
	
	int i;
	for (i=0; i<10; i++)
		printf("hello world!\n"); 
	
	//project 6 
	
	int i=0;
	char c;
	
	printf ("input a string : ");
	while((c=getchar()) !='\n')
	{
		if(c >= '0' && c <= '9')
			i++;		
	}
	
	printf("the number of digit is %d", i); */
	
	//project 7
	
	int answer = 59;
	int input;
	int cnt = 0;
	
	do
	{
		printf("input answer :");
		scanf("%d", &input);
		
		if (input < answer)
		{
			printf("low!\n");
		}
		else if (input > answer)
		{
			printf("high!\n");
		}
		cnt++;
	}
	while(input != answer);
	printf("congratulation. trial : %i\n", cnt);
	return 0;
}
