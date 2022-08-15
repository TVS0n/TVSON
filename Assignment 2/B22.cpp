# include <stdio.h>
int Fmax ( int a, int b, int c)
{
	int max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	return max;
}
int Fmin ( int a, int b, int c)
{
	int min=a;
	if(min>b)
	{
		min=b;
	}
	if(min>c)
	{
		min=c;
	}
	return min;
}
int main (void)
{
		printf("nhap 3 so: ");
	int a,b,c;
	printf("\n nhap a: ");
	scanf("%d",&a);
	printf("\n nhap b: ");
	scanf("%d",&b);
	printf("\n nhap c: ");
	scanf("%d",&c);
	printf(" \n max la: %d",Fmax(a,b,c));
	printf(" \n min la: %d",Fmin(a,b,c));
}

