#include <stdio.h>

void inputArr(int *arr, int *n) {
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", n);
        if (*n <= 0 || *n > 100) {
            printf("So phan tu khong hop le! Nhap lai.\n");
        }
    } while (*n <= 0 || *n > 100);

    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void displayArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insertElement(int *arr, int *n) {
    int value, position;

    printf("Nhap vi tri can chen : ");
    scanf("%d", &position);

    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    for (int i = *n; i > position; i--) {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + position) = value;

    (*n)++;
}

int main() {
    int arr[100];
    int n;

    inputArr(arr, &n);

    printf("\nMang ban dau: ");
    displayArr(arr, n);

    insertElement(arr, &n);

    printf("\nMang sau khi chen: ");
    displayArr(arr, n);

    return 0;
}

