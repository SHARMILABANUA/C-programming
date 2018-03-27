#include <stdio.h>

int main(void) {
	int a;
	printf("enter num:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("The num is zero");
	}
	else if(a>0)
	{
		printf("The num is +ve");
	}
	else {
		printf("The num is -ve");
	}
	return 0;
}
