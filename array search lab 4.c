#include <stdio.h>

int main()
{
    int n,i;
    printf("how many array elements:");
    scanf("%d",&n);
    int arr[n];
    int temp = 0;
    printf("give input:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("\n\nElements of original array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


    for ( i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n");


    printf("\n\nElements of array sorted in ascending order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int s;
    printf("\n\nwhich number you want to search:");
    scanf("%d",&s);

    for (int i = 0; i < n; i++)
    {

        if ( arr[i]==s)
        {
            printf("WE found the match in element %d :%d\n",i+1, arr[i]);


        }
        else
            printf("Did not match with element %d\n",i+1);
    }

    getch();
    return 0;
}

