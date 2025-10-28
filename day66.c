#include <stdio.h>

int main() {
    int n, i, j, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    int found = 0;
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    if (!found) {
        printf("-1 -1\n");
    }
    
    return 0;
}