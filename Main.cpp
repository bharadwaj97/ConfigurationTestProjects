

#include"gtest/gtest.h"
#include <iostream>
#include<BlackBoxTest.h>
#include<string>
using namespace std;

//-------WhiteBoxTest Case#1 for Sum of Natural Numbers

int add(int n) {
    if (n != 0)
        return n + add(n - 1);
    return 0;
}
TEST(SumTests, Add) {
    EXPECT_EQ(21, add(6));
    EXPECT_EQ(6, add(3));
}


//-----------WhiteBoxTest Case#2 for LCM of Two Numbers

int Findlcm(int x, int y)
{
    static int multiple = 0;

    // Increments multiple by adding max value to it
    multiple += y;

    if ((multiple % x == 0) && (multiple % y == 0))
    {
        return multiple;
    }
    else
    {
        return Findlcm(x, y);
    }
}

TEST(LcmTests, Findlcm) {
    ASSERT_EQ(36, Findlcm(12,18));
    EXPECT_EQ(40,Findlcm(5,8));

    
}

//-----------WhiteBoxTest Case#3 Power of a number

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * calculatePower(base, powerRaised - 1));
    else
        return 1;
}

TEST(PowerTest, calculatePower) {
   
    EXPECT_EQ(4, calculatePower(2, 2));
    EXPECT_GE(99, calculatePower(3, 3));


}


//-----------WhiteBoxTest Case#4 Reverse of Digits

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

TEST(ReverseTest,reverseDigits ) {

    EXPECT_EQ(654321, reverseDigits(123456));
   //Decimal
    EXPECT_EQ(321, reverseDigits(1.23));
}

//-----------WhiteBoxTest Case#4 LeapYear


bool LeapYear(int year) {

    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

TEST(LeapearTest,LeapYear) {

    EXPECT_TRUE(true, LeapYear(1992));
    EXPECT_FALSE(false,LeapYear(1995));

}




//------BlackBoxTestCases-----


//BlackBoxTestCase#1 Prime Nmber Verification
TEST(PrimeTests, PrimeNumber) {
    EXPECT_TRUE(true, Prime(7));
    EXPECT_FALSE(false, Prime(-4));
}



//BlackBoxTestCase#2 Area of Rectangle
TEST(AreaTests, Rectangle) {
    EXPECT_EQ(63, RectangleArea(7,9));
    EXPECT_EQ(24, RectangleArea(6,4));
}



//BlackBoxTestCase#3 Sum Of Individual Digits in a number
TEST(SumDigitsTests, SumOfDigits) {
    EXPECT_EQ(15, SumDigits(654));
    EXPECT_EQ(27, SumDigits(999));
}

//BlackBoxTestCase#4 Palinndrome of a number
TEST(PalindrommeTests,PalindromeOfDigits) {
    EXPECT_TRUE(true, Palindrome(191));
    EXPECT_FALSE(false, Palindrome(998));
}


//BlackBoxTestCase#5 Area of a Circle
TEST(AreaOfCircleTests, AreaofCircle) {
    EXPECT_FLOAT_EQ(78.5, CircleArea(5));
    EXPECT_FLOAT_EQ(212.78, CircleArea(8.23));
}









int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    int result = RUN_ALL_TESTS();
    return result;

}

