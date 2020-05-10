/*
	Name: c programe for print pattern
	Input = 5
 		1
      2112
    321  123
  4321    1234
54321      12345
  4321    1234
    321  123
      2112
        1	
*/
#include<stdio.h> 
#include<stdlib.h>
 int main() 
{

int i, j,n; 
printf("Enter Number : "); 
scanf("%d",&n); 
for(i=-n+1;i<n;i++) 
	{
		for(j=1; j<=abs (i); j++) 
			printf("  "); 
		for(j=n-abs (i); j>0; j--) 
			printf("%d", j); 
		for(j=1; j<=n-abs (i)-2; j++) 
			printf("  "); 
		for(j= ( (abs (i) +1==n) ?2:1); 
		 	j<=n-abs (i);j++)
			printf("%d",j); 
		printf ("\n");
	}

}