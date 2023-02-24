/**
* @file main.c
* @author Коваленко В.А, гр. 515-В
* @date 20 серпня     2022
* @brief Навчальна практика.
*
* 34 Варіант - Числа Армстронга
*/

#include <stdio.h>
#include <locale.h>
#include "find_narcissistic.h"

int main()
{
    //Функції для визначення діапазону
    long int min, max;
    printf("Enter the range of Armstrong numbers: \n");
    printf("Least number : ");
    scanf_s("%ld", &min);
    printf("Highest number: ");
    scanf_s("%ld", &max);
    // заміна значеннь при max < min
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
