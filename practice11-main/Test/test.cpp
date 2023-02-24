#include "pch.h"
#include "..\practice1\find_narcissistic.c"

TEST(TestCaseName, TestName) 
{
	long int min1 = 1; long int max1 = 10;
	long int min2 = 369; long int max2 = 370;
	long int min3 = 1635; long int max3 = 92726;

  EXPECT_EQ(45, ArmstrongNumbersCheck(min1, max1));
  EXPECT_EQ(370, ArmstrongNumbersCheck(min2, max2));
  EXPECT_EQ(72430, ArmstrongNumbersCheck(min3, max3));

}