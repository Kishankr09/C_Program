#include<stdio.h>
main(){
	int arr[100],n,i,j,c;
	printf("Enter any Number ");
	scanf("%d",&n);
	for(i =0; i<n; i++)
		scanf("%d",&arr[i]);
		
	for(c=0,i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(arr[i] == arr[j])
				c++;
		}	
		if(c == 1)
			printf("%d ",arr[i]);
	}
	
}
