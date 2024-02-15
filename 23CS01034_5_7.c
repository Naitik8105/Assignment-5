//code for question 7
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>
int main()
{
    int array[10];
    int n = 10;
    printf("Enter the elememts of array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d:",(i+1));
        scanf("%d",&array[i]);
    }
    printf("Elements of array before sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    for (int i = 0; i < (n-1); i++)
    {
        for(int j = 0; j < (n-i-1); j++){

            if(array[j] > array[(j+1)]){
                swap(&array[j],&array[(j+1)]);
            }
            else 
            continue;
        }
    }
    printf("Elements of array after sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

    
    
    
 