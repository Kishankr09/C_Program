#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,b=0;
	printf("Enter The Value\t");
	scanf("%d",&n);
	for(i= 1; i<= n; i++){
		for(j = 1; j<=n; j++){
			if(b == 0)
				printf("%d ",b++);
			else
				printf("%d ",b--);
		}
		printf("\n");
	}
}
