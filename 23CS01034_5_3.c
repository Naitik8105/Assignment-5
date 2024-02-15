#include <stdio.h>
void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num, count = 0;

    printf("Enter a 4 digit number:");
    scanf("%d", &num);

    int digit[4];
    while (num > 0)
    {
        digit[(3 - count)] = num % 10;
        num /= 10;
        count++;

    }
    int numofpermutation = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 6; k++)
        {

            if ((k % 2) == 0)
            {
               
                swap(&digit[1], &digit[2]);
                printf("%d: %d%d%d%d\n", numofpermutation, digit[(0 + i) % 4], digit[(1 + i) % 4], digit[(2 + i) % 4], digit[(3 + i) % 4]);
                numofpermutation++;
                
            }
            else if ((k % 2) != 0)
            {
                
                swap(&digit[2], &digit[3]);
                printf("%d: %d%d%d%d\n", numofpermutation, digit[(0 + i) % 4], digit[(1 + i) % 4], digit[(2 + i) % 4], digit[(3 + i) % 4]);
                numofpermutation++;
                
            }
        }
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     int digits[4], i = 0, temp = num;
//     while (temp)
//     {
//         digits[i] = temp % 10;
//         temp /= 10;
//         i++;
//     }
//     int v = 1;
//     for (int j = 0; j < 4; j++)
//     {
//         for (int k = 0; k < 4; k++)
//         {
//             for (int l = 0; l < 4; l++)
//             {
//                 for (int m = 0; m < 4; m++)
//                 {
//                     if (m == l || m == k || m == j || l == k || l == j || k == j)
//                     {
//                         continue;
//                     }

//                     printf("%d :%d%d%d%d \n", v, digits[j], digits[k], digits[l], digits[m]);
//                     v++;
//                 }
//             }
//         }
//     }

//     return 0;
// }