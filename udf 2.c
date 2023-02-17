//2.WAP to find if a given nunmber is divisible by 3 & 5
//both or not using UDF.
#include<stdio.h>
void sum(int a){
	if(a%15==0){
		printf("yes divisible");
	}
	else{
		printf("no divisible");
	}
	
}
main(){
	int a;
	printf("enter  value:");
	scanf(" %d",&a);
	sum(a);
}

