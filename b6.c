#include <stdio.h>

void findElement(int *arr, int n){
    int x, i;
    int found = 0;
    printf("\nNhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++){
        if(arr[i]==x){
            printf("Phan tu %d nam o vi tri: %d\n", x, i);
            found = 1;
        }
    }
    if(!found){
        printf("Khong tim thay x!");
    }
}
void displayArray(int *arr, int n){
    printf("\nHien thi mag vua nhap: ");
    for (int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
    
}
void inputArray(int *arr, int *n){
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", n);
        if(*n < 0 || *n > 100){
            printf("Nhap lai so phan tu trong mang!");
        }
    } while (*n < 0 || *n > 100);
    for (int i = 0; i < *n; i++){
        printf("Arr [%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
int main (){

    int arr[100];
    int n, x, pos;

    inputArray(arr, &n);
    displayArray(arr, n);

    findElement(arr, n);

    return 0;
}