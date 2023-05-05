#include<stdio.h>
main(){
	int i,j,arr[50],rev,num,n;
	printf("Enter the Size  ");
	scanf("%d",&n);
	for(i = 0; i< n; i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i< n; i++){
		num = arr[i];
		rev = 0;
		while(num > 0)
		{
			rev = rev*10+(num%10);
			num/=10;
		}
		printf("%d ",rev);
	}
}
