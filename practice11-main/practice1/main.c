#include <stdio.h>
#include <locale.h>
#include "find_narcissistic.h"

int main()
{
    long int min, max;
    printf("Enter the range of Armstrong numbers: \n");
    printf("Least number : ");
    scanf_s("%ld", &min);
    printf("Highest number: ");
    scanf_s("%ld", &max);
    // swap numbers if max < min
    if (max < min) 
    {
        max += min;
        min = max - min;
        max -= min;
    }
    printf("Armstrong numbers in the range between %d and %d: \n", min, max);
    ArmstrongNumbersCheck(min, max);
    return 0;
}
