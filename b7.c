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
    for(int i = 0; i < n; i++){
        printf("%d  ", *(a + i));  
    }
}

void bubblesort(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(a + j) > *(a + j + 1)) {
                int temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}

int main (){
    int arr[100];
    int n;

    inputarr(arr, &n);

    printf("\nMang ban dau: ");
    displayarr(arr, n);

    bubblesort(arr, n);

    printf("\nMang sau khi sap xep : ");
    displayarr(arr, n);

    return 0;
}

