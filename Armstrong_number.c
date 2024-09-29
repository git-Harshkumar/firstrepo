#include <stdio.h>
#include<math.h>
int main (){
	// 234 = 2^3 + 3^3 + 4^3 ;
	int ask , i ,j,k, digit ,sum1 =0,sum2 =0 ;
	int num[10] ;
	printf("number of digit you want to enter 1 or 2 ");
	scanf("%d",&digit);
	for(i=0;i<digit;i++){
	
	printf("enter a value here");
	scanf("%d",&num[i]);
	sum1 += num[i];
	
	}
	
	if(digit == 3){
		for(j=0;j<digit;j++){
			int r = pow(num[j],3) ;
			 sum2 += r ; 
			printf("%d\n",r);
			}
		}
		if(digit==2){
		for(k=0;k<2;k++){
		int j = pow(num[k],2) ;
		printf("%d\n",j);	
		}
	}
	if (sum1==sum2){
		printf("your number is an armstrong number ");
	}
	else{
		printf("your number is not in armstrong number ");
	}
	return 0;
	
}
