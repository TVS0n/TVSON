# include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua mang n= ");
	scanf("%d",&n);


	int arr[n];
	printf("nhap mang: \n");
	
	
	for(int i= 0;i<n;i++)
	{
		printf("\n phan tu trong mang arr[%d]: ",i+1 );
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap so thu tu bat ky trong mang: ");
	scanf("%d",&x);
	int kcxn=0;
	int kcgn=0;
	// gia tri xa x nhat
	for(int i = 0 ; i < n ; i++)
   {
      	if((arr[i]-x) > kcxn)
      {
        	kcxn = (arr[i]-x);
        
      }
      
   }
   printf("\n gia tri xa x nhat la :%d",kcxn);
    /*gia tri gan x nhat
    
   for (int i=0;i<n;i++)
   {
   		if((arr[i]-x)<kcgn)
   		{
   			kcgn=(x-arr[i]);
		}
   }
   printf("\n gia tri gan kcgn nhat la :%d",kcgn);
   */


}
