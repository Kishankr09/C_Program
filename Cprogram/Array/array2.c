#include<stdio.h>
#include<conio.h>
main(){
	int n,arr1[100],i,s,c=0;
	printf("Enter the Size of The array\t");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
		scanf("%d",&arr1[i]);
	printf("Enter a Number To Search\t");
		scanf("%d",&s);
	for(i = 0; i<n; i++)
	{
		if(arr1[i] == s)
			{
				c = 1;
				break;
			}
	}
	if( c == 1)
	printf("%d is Available",s);
	else
	printf("%d is not Available",s);
}
