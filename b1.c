#include <stdio.h>

void inthuong(int x) {
    printf("\nGia tri cua bien (dung bien): %d", x);
    printf("\nDia chi cua bien (dung &): %p", (void*)&x);
}
void incontro(int *p) {
    printf("\nGia tri truy cap tu con tro (*p): %d", *p);  
    printf("\nDia chi ma con tro dang tro den (p): %p", (void*)p); 
}

int main() {
    int a = 10;   
    int *ptr = &a; 

    printf("Gia tri ban dau cua a: %d", a);
    printf("\nDia chi cua a: %p", (void*)&a);

    inthuong(a);
    printf("\n");
    incontro(ptr);

    return 0;
}

