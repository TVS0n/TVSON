# include <stdio.h>
int fmax(int a, int b, int c)
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

int main (void){
	int a,b,c;
	printf("nhap 3 so: ");
	printf("\n nhap a: ");
	scanf("%d",&a);
	printf("\n nhap b: ");
	scanf("%d",&b);
	printf("\n nhap c: ");
	scanf("%d",&c);
	printf(" \n max la: %d",fmax(a,b,c));
	
}
