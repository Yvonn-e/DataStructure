#include <stdio.h>
#include <stdlib.h>

int summation(int ARR[], int size);
int maximum(int ARR[], int size);

int main()
{
    int size;
    printf("Enter array length: ");
    scanf("%d", &size);
    int arr[size];

    printf("enter %d value : ", size);
    for (int i = 0 ; i< size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i< size; i++)
    {
        printf("%d \n", arr[i]);
    }

    summation(arr, size);
    maximum(arr, size);

return 0;

}

int summation(int ARR[], int size )
{
    int sum=0;
    for(int i= 0; i < size; i++)
    {
        sum += ARR[i];
    }
    printf(" Sum of array is: %d\n", sum);

    return sum;
    }

 int maximum(int ARR[], int size)
 {
     int max= 0;
     for(int i= 0; i< size; i++)
     {
         if (ARR[i]>max)
         {
             max=ARR[i];
         }
     }
     printf("The maximum number is: %d", max);

     return max;
 }
