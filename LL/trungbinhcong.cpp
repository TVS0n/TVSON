# include <stdio.h>
int main ()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int arr[n];
	
	int sum;
	for (int i =0;i<n;i++)// duyt mang
	{
		printf("\n Nhap vao phan tu a[%d] ",i);	
		scanf("%d",&arr[i]);
	
	if (arr[i]%2!=0 && i%2==0 )
	{
		sum=sum+arr[i];
		
	}
		
	}
	printf (" tong cac so le trong mang : %d",sum);
	
}




