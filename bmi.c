#include <stdio.h>

int main(void) {
    int height, weight;
    if (scanf("%d %d", &height, &weight) != 2) {
        return 1;
    }

    if (400 * weight >= height * height) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
