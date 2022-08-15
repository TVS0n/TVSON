# include <stdio.h>
int main ()
{

	int n;
	printf("nhap n= ");
	scanf("%d",&n);


	int arr[n];
	int i,high,m;

	
	
	for (int i =0;i<n;i++)// duyt mang
	{
			printf("\n Nhap vao phan tu a[%d] ",i);	
		scanf("%d",&arr[i]);
	
	}
	// hien thi gia tri lon nhat 
		high=arr[0];
		
	
	for (int i=1;i<n;i++){
		
		if (arr[i]>high)
		{
			m=high;
			high=arr[i];
		} if (arr[i] >m && arr[i] < high)
		{
			m=arr[i];
		}	
	}
	
	printf("\n gia tri max %d",high);
	printf("\n gia tri gan lon nha %d",m);
}
