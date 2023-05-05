#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j,c=1;
	printf("Enter any Number \t");
	scanf("%d",&n);
	for(i = 1; i<=n; i++){
		for(j = i; j<=n; j++){
			printf("%d ",c++);
		}
		printf("\n");
	}
	return 0;
}
