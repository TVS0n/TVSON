# include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua mang");
	scanf("&d",&n);

	int arr[n];
	printf("nhap mang: \n");
	
	for(int i= 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap so x can tim");
	scanf("%d",&x);
	
	int t=0;
	for (int i=0;i<n;i++){
		if (x==arr[i]){
			printf("da tim thay gia tri x");
			t++;
			break;
		}
	}
	if(t==0){
		printf("khong tim thay");
	}
}

