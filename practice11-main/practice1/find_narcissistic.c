/**
* @file find_narcissistic.c
* @author Коваленко В.А, гр. 515-В
* @date 20 серпня     2022
* @brief Навчальна практика.
*
* 34 Варіант - Числа Армстронга
*/

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
        // Значення суми і ступеня залежно від числа
        int index = 0;
        long int sum = 0;


        value = Armstong_Number;

        // Цикл по підвіщенню ступеня (1 - 1, 10 - 2, 100 - 3...)
        while (value != 0)
        {
            value /= 10;
            index++;
        }
        value = Armstong_Number;

        // Перевірка на збіг суми перемноженних членів з самим числом
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
