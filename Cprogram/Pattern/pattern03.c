#include<stdio.h>
main(){
	int i,j,n;
	char ch1 = 'A', ch2 = 'a';
	printf("Enter The Limit  ");
	scanf("%d",&n);
	for(i= 1; i<=n; i++){
		for(j =1; j<=n; j++){
			if(i % 2 == 0)
				printf("%2c",ch2);
			else
				printf("%2c",ch1);
		}
		(i%2==0) ? ch2++ : ch1++ ;
		printf("\n");
	}
}
