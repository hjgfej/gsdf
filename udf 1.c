//1.WAP to find cube of given no using UDF.
#include<stdio.h>
void sum(int a){
	printf("cube :%d",a*a*a);
}
main(){
	int a;
	printf("enter cube value:");
	scanf("%d",&a);
	sum(a);
}

