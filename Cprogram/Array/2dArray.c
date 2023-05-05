#include<stdio.h>
main(){
	int a[20][20],n,i,j,ev,od,z;
	printf("Enter any Number ");
	scanf("%d",&n);
	for(i =0; i<n; i++){
		for(ev=0,od=0,z=0,j = 0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\tEven\todd\tZero\n");
	puts("_____________________________________");
	for(i =0; i<n; i++){
		for(ev=0,od=0,z=0,j = 0; j<n; j++){
			if(a[i][j]==0)
				z++;
			else if(a[i][j]%2==0)
				ev++;
			else
				od++;
		}
		printf("%d row\t%d\t%d\t%d\n",i,ev,od,z);
	}
}
