#include <stdio.h>
#include <math.h>

void square(int *seed);

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        square(&arr[i]);
        if (i + 1 < 10)
            printf("%d, ", arr[i]);
        else
            printf("%d", arr[i]);
    }
    return 0;
}

void square(int *seed) {
    if (*seed % 2 == 0)
        *seed = pow(*seed, 2);
}