#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, left, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,15,16,17};
    int n = 17;
    int x = 17;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
    {
        printf("Target value not found\n");
    }
    else
    {
        printf("Target value found at index %d.\n", result);
    }
