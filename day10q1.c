#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("Enter three side lengths: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || (s1 + s2 <= s3) || (s1 + s3 <= s2) || (s2 + s3 <= s1)) {
        printf("Not a valid triangle\n");
    } else if (s1 == s2 && s2 == s3) {
        printf("Equilateral\n");
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}