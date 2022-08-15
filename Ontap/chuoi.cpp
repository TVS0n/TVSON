#include <stdio.h>
#include <string.h>
#include <iostream>
main()
{
	int x=10;
	int *p;
	p=&x;
	
	printf("x= %d\n",x);
	printf("dia chi cua x: ");
	std:: cout<< &x;
	printf("\n gia tri cua p= ");
	std:: cout<<p;
	x++;
	printf("\n x=%d",x);
	(*p)++;
	printf("\n x=%d",x);
}
