#include<stdio.h>
#include<conio.h>
main(){
	int i, j, n,c=1;
	printf("Enter The Number ");
	scanf("%d",&n);
	for(i= 1; i<=n; i++){
		if(i%2==0)	
			c = c+i-1;
		else if(i > 1 && i%2!=0)
			c = c+i;
		for(j=1; j<i; j++)
			printf("  ");
		for(j =1; j<=n-i+1; j++)
			printf("%d ",(i%2==0)?c--:c++);	
		
		printf("\n");
	}
}
