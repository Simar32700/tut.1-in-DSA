#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, val, found = 0;

    printf("Enter value to search: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break; // stop after first match
        }
    }
    if (!found) {
        printf("Not found in array.\n");
    }
    return 0;
}