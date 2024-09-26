//write a program in c to access the array elements using pointers
#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr;
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr; 
    printf("\nArray elements using pointers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
