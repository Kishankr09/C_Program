#include<stdio.h>
main(){
	int i,j,n;
	
	printf("Enter The Limit  ");
	scanf("%d",&n);
	for(i= 1; i<=n; i++){
	char ch1 = 'A', ch2 = 'a';
		for(j =1; j<=n; j++){
			if(j % 2 == 0)
				printf("%2c",ch2);
			else
				printf("%2c",ch1);
			(j%2==0) ? ch2++ : ch1++ ;
		}
		
		printf("\n");
	}
}
