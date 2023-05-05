#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n;
	printf("Enter The Value\t");
	scanf("%d",&n);
	for(i= 1; i<= n; i++){
		for(j = 1; j<=n; j++){
			printf("%d%d ",i,j);
		}
		printf("\n");
	}
}
