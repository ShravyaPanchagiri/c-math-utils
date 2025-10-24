#include<stdio.h>
#include"math_utils.h"

int main(){
	int a=10, b=2;

	printf("Add: %d +%d=%d\n", a,b, add(a,b));
	printf("Subtract: %d - %d = %d\n",a, b, subtract(a,b));
	printf("Multiply: %d * %d = %d\n", a,b,multiply(a,b));
	printf("Divide: %d /%d = %d\n", a,b,divide(a,b));

	int c=0;
	printf("Divide: %d / %d = %d\n", a,c,divide(a,c));

	return 0;

}
