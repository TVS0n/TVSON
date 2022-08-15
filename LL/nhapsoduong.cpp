#include <stdio.h>
int main (){

int a,b,c;
printf("nhap gia tri a ");
scanf("%d",&a);

printf("/nnhap gia tri b ");
scanf("%d",&b);

printf("/nnhap gia tri c ");
scanf("%d",&c);
	
	
	do {
		printf("nhap gia tri a ");
		scanf("%d",&a);	
	
		
	}while (!(a+b>c&&a+c>b&&b+c>a));
	

	
	}

