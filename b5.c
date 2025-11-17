#include<stdio.h>

void inputarr(int *a,int *n){
    do{
        printf("\nHay nhap so phan tu cua mang : ");
        scanf("%d",n);
        if(*n <= 0 || *n > 100){
            printf("\nSo nhap khong hop le !");
        }
    }while(*n <= 0 || *n > 100);

    for(int i = 0; i < *n; i++){
        printf("arr[%d]= ", i);
        scanf("%d", (a + i));   
    }
}

void displayarr(int *a, int n){
    printf("\nCac phan tu cua mang : ");
    for(int i = 0; i < n; i++){
        printf("%d  ", *(a + i));  
    }
}

int main (){
    int arr[100];
    int n;

    inputarr(arr, &n);
    displayarr(arr, n);

    int x, position;

    printf("\n\nNhap vi tri can them: ");
    scanf("%d", &position);

    if(position < 0 || position > n){
        printf("\nVi tri khong hop le!");
    } else {
        printf("Nhap gia tri can them: ");
        scanf("%d", &x);

        for(int j = n; j > position; j--){
            *(arr + j) = *(arr + j - 1);
        }

        *(arr + position) = x;
        n++;
        
        printf("\nMang sau khi chen:\n");
        displayarr(arr, n);
    }

    return 0;
}

