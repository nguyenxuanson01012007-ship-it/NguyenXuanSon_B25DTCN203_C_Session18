#include<stdio.h>

void inputarr(int *a,int *n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",n);
		if(*n<0 || *n>100){
			printf("Nhap lai n\n");
		}
	}while(*n<0 || *n>100);
	
	for(int i=0;i<*n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",(a + i));
	}
}

void displayarr(int *a,int n){
	printf("Cac phan tu cua mang la : ");
	for(int i=0;i<n;i++){
		printf("%d  ",*(a + i));	
	}
}

int main (){
	int arr[100];
	int n;
	
	inputarr(arr,&n);
	displayarr(arr,n);
}




