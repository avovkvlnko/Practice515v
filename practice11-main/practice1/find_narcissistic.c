#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "find_narcissistic.h"

PUBLIC long int ArmstrongNumbersCheck(long int min, long int max)

{
    long int value, number;
    long int sum_of_armstrong = 0;

    for (long int Armstong_Number = min; Armstong_Number <= max; Armstong_Number++)
    {
        // Value of sum and max index of number
        int index = 0;
        long int sum = 0;


        value = Armstong_Number;

        // Loop by step up (1 - 1, 10 - 2, 100 - 3...)
        while (value != 0)
        {
            value /= 10;
            index++;
        }
        value = Armstong_Number;

        // Check coincidence
        while (value > 0)
        {
            number = value % 10;
            sum += pow(number, index);
            value /= 10;
        }

        if (sum == Armstong_Number)
        {
            printf("%ld ", Armstong_Number);
            sum_of_armstrong += Armstong_Number;
        }

    }
    return sum_of_armstrong;
}