#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,a=1,b=1;
	printf("Enter The Value\t");
	scanf("%d",&n);
	for( i= 1; i<= n; i++){
		b = n*i;
		for( j = 1; j<=n; j++,a++){
			if(i%2!=0)
				printf("%4d",a);
			else
				printf("%4d",b--);
		}
		printf("\n");
	}
}
