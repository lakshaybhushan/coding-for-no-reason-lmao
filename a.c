#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[10];
    arr[3] = 5;
    arr[4] = 8;
    arr[5] = arr[4] + arr[3];

    printf("%d\n", arr[5]);

    return 0;
}