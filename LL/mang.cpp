# include <stdio.h>
int main ()
{

	int n;
	printf("nhap n= ");
	scanf("%d",&n);


	int arr[n];
	int i,high;

	
	
	for (int i =0;i<n;i++)// duyt mang
	{
			printf("\nnhap  so nguyen %d ",i+1);	
		scanf("%d",&arr[i]);
	
	}
		high=arr[0];
	
	for (int i=1;i<n;i++){
		
		if (arr[i]>high)
			high=arr[i];
		
	}
	printf("\n gia tri max %d",high);
}
