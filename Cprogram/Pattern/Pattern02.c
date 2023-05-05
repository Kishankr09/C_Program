#include<stdio.h>
#include<conio.h>
main(){
	int n,i,j,c,b,d=1;
	puts("Enter Any Number ");
	scanf("%d",&n);
	int a=n*2-1;
	for(i = 1; i<=n; i++){
		c = i;
		b=i+d;
		for(j = 1; j<=i; j++){
				if(j % 2 == 0){
					printf("%4d",c);
					
					b-=4;
					c=c+b;
				}
					
				else{
				printf("%4d",c);
					c+=a;
				} 
			}
			d++;
			a-=2;
		
		printf("\n");	
		}
		
	}
