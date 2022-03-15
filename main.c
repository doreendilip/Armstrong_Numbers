// finding a series of Armstrong numbers upto n numbers



#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i, end;


    printf("Enter the value of the nth number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between 1 to %d are: \n", end);

    for(i=1; i<=end; i++)
    {
        sum = 0;

        num = i;

        digits = (int) log10(num) + 1;


        while(num > 0)
        {
            lastDigit = num % 10;
            sum = sum + ceil(pow(lastDigit, digits));
            num = num / 10;
        }

        if(i == sum)
        {
            printf("%d, ", i);
        }

    }

    return 0;
}
