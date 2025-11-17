#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
		*a=*b;
		*b=temp;
}

int main (){
	int a,b;
	int *pa=&a;
	int *pb=&b;
	
	printf("Hay nhap a : ");
	scanf("%d",pa);
	
	printf("\nHay nhap b : ");
	scanf("%d",pb);
	
	printf("\nGia tri ban dau la : %d ,%d ",a,b);
	
	swap(pa,pb);
	printf("\nGia tri sau khi hoan doi la : %d ,%d",a,b);
	
	
}



