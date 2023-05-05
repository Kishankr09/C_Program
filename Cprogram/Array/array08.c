#include<stdio.h>
#include<conio.h>
main(){
	int n,c,m,i,d,rev,arr[50],k,size;
	printf("Enter the Size  ");
	scanf("%d",&size);
	for(i = 0; i< size; i++){
		scanf("%d",&arr[i]);
	}
	for(k = 0; k<size; k++)
	{	c=rev=0;
		n = arr[k];
		for(i = 2; i<=n/2; i++){
			if(n % i == 0){
				c++;
				break;
			}
		}
		if(c == 0)
		{
			m= n;
			while(n>0){
				d = n % 10;
				n = n / 10;
				rev = rev * 10 + d;	
			}
			c = 0;
			for(i = 2; i<=rev/2; i++){
		  		if(rev % i == 0){
					c++;
					break;
				}
			}
			if(c == 0)
			printf("%d  ",arr[k]);	
	}
	}
	
}
