#include <stdio.h>

int main() {
    int n, i, val, pos = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to delete: ");
    scanf("%d", &val);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == val) {
            pos = i;
            break;
        }
    }
    
    if (pos == -1) {
        printf("Element not found\n");
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        
        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}