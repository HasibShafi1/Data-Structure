#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 4, 2, 7, 5, 9, 8};
    int n = 7;
    int x = 6;
    int result = linearSearch(arr, n, x);
    if(result == -1) {
        printf("Target value not found");
    } else {
        printf("Target value found at index %d.", result);
    }
    return 0;
}
