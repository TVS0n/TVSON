# include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua mang n= ");
	scanf("%d",&n);


	int arr[n];
	printf("nhap mang: \n");
	
	
	for(int i= 0;i<n;i++)
	{
		do
		{
			printf("\n phan tu trong mang arr[%d]: ",i+1 );
			scanf("%d",&arr[i]);
		}while(arr[i]!=arr[i-1]);
		
		printf("nhap lai gia tri khac");
		
	}
	
}
