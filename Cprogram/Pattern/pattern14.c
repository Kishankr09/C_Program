#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n;
	printf("Enter The Value\t");
	scanf("%d",&n);
	for(i= 1; i<= n; i++){
		for(j = 1; j<=n; j++){
			if(i == j)
				printf("* ");
			else if(j > i)
				printf("%d ",j);
			else
				printf("%d ",i);
		}
		printf("\n");
	}
}
