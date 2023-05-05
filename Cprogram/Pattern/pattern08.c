#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j,c=1,d=1;
	printf("Enter any Number \t");
	scanf("%d",&n);
	for(i = 1; i<=n; i++){
		d = i;
		for(j = 1; j<=n; j++){
			if(j % 2 == 0)
			{
				c=n*j+1-i;
				printf("%d ",c);
			}
			else
			{
				printf("%d ",d);
				d = d*n*2+j;
			}
		}
		printf("\n");
	}
	return 0;
}
