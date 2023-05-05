#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,c;
	printf("Enter The Number ");
	scanf("%d",&n);
	for(i = 1; i<=n; i++){
		c=1;
		for(j = 1; j<=n+i-1; j++){
			if(j<=n-i)
				printf("  ");
			else
			{
				printf("%d ",c);
				c++;
			}
		}
		printf("\n");
	}
}
