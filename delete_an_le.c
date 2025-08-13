#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, pos;

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for (int i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}