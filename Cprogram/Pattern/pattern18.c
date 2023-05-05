#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,c;
	printf("Enter The Number ");
	scanf("%d",&n);
	for(i = 1; i<=n; i++){
		c=i;
		for(j = 1; j<=n+i-1; j++){
			if(j<=n-i)
				printf("  ");
			else if(j>n-i)
			{
				if( j == n+1)
				{
					c-=1;
					printf("%d ",--c);
				}
				else if(j>n){
					c-=1;
					printf("%d ",c);
				}	
				else
					printf("%d ",c++);				
			}
		}
		printf("\n");
	}
}
