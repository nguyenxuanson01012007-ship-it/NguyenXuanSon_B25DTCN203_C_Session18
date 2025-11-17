#include<stdio.h>
void input(int *a,int *b){
	
	printf("Hay nhap gia tri a : ");
	scanf("%d",a);
	
	printf("\nHay nhap gia tri b : ");
	scanf("%d",b);
	
}
void sum(int *a,int *b,int *result){
	*result= *a + *b;
}
int main (){
	int a,b,result;
	
	input(&a,&b);
	printf("\n");
	sum(&a,&b,&result);
	
	printf("Gia tri vua nhap la : %d , %d ",a,b);
	printf("\nTong hai so la : %d",result);
}


