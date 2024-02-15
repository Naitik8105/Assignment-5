//Code for question 1
#include <stdio.h>
static int nums[9];
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int count = 0;
    int temp = num;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp)
    {
        int c = temp % 10;
        temp /= 10;
        nums[c - 1]++;
    }
    int ans = 0;
    for (int i = 0; i < 9; i++)
    {
        if (nums[i] > 0)
        {
            ans += i + 1;
        }
    }

    printf("No. of digits : %d\n", count);
    printf("Sum of digits : %d\n", ans);
    return 0;
}