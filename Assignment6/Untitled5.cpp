# include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua mang n= ");
	scanf("%d",&n);

	int arr[n];
	printf("nhap mang: \n");
	
	for(int i= 0;i<n;i++)
	{
		printf("\n phan tu trong mang arr[%d]",i+1 );
		scanf("%d",&arr[i]);
	}
	int tm=0;
	int kl=0;
	for (int i=0;i<n;i++)
	{
		if(arr[i]>0){
			tm++;
			if(tm>kl){
				kl=tm;
			}
		}else {
			tm=0;
		
		}
	}
	printf("so luong so dung lien tiep nhieu nhat : %d",kl);
}
