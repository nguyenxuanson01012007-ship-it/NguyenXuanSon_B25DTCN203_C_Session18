#include <stdio.h>

void deleteElement(int *arr, int *n, int *pos){
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", pos);
    
    if(*pos < 0 || *pos >= *n){
        printf("Vi tri khong hop le!\n");
        return;
    }

    for(int i = *pos; i < *n - 1; i++){
        arr[i] = arr[i + 1];
    }

    (*n)--;
}
void inputArray(int *arr, int *n){
    do{
        printf("Nhap so phan tu trong mang: ");
        scanf("%d", n);
    }while (*n < 0 || *n > 100);
    for (int i = 0; i < *n; i++){
        printf("Arr [%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void displayArray(int *arr, int n){
	printf("\nMang vua nhap la: ");
    for (int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
}
int main (){

    int arr[100];
    int n, pos;

    inputArray(arr, &n);
    displayArray(arr, n);
    
    deleteElement(arr, &n, &pos);
    displayArray(arr, n);

    return 0;
}
