

#include"gtest/gtest.h"
#include <iostream>
#include<BlackBoxTest.h>
using namespace std;

//-------WhiteBoxTest Cases for Sum of Natural Numbers
int add(int n) {
    if (n != 0)
        return n + add(n - 1);
    return 0;
}

//white box test case#1 for All Positive Numbers-Pass

TEST(SumTests, Add) {
    EXPECT_EQ(21, add(6));
}

//white box test case#2 for a Negetive Number Input

TEST(SumTests, AddNegetive) {
    EXPECT_EQ(-21, add(-6));
}

//white box test case#3 for a Decimal Number Input

TEST(SumTests, AddDecimal) {
    EXPECT_EQ(15, add(8.9));
}

//white box test case#4 for LargeNumbers

TEST(SumTests, AddLargel) {
    EXPECT_EQ(499500, add(999));
}


//white box test case#5 for Natural Numbers

TEST(SumTests, AddNatural) {
    EXPECT_EQ(55, add(10));
}



//------BlackBoxTestCases For Prime Nmber Verification-----


//BlackBoxTestCase#1 -Natural Number

TEST(PrimeTests, PrimeNatural) {
    EXPECT_EQ(true, Prime(7));
}

//BlackBoxTestCase#2 -Integer
TEST(PrimeTests, PrimeInteger) {
    EXPECT_EQ(false, Prime(-4));
}

//BlackBoxTestCase#3 -Decimal 
TEST(PrimeTests, PrimeDecimal) {
    EXPECT_EQ(false, Prime(7.7));
}

//BlackBoxTestCase#4 -One
TEST(PrimeTests, PrimeOne) {
    EXPECT_EQ(false, Prime(1));
}

//BlackBoxTestCase#5 -One
TEST(PrimeTests, PrimeAnotherOne) {
    EXPECT_EQ(true, Prime(1));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    int result = RUN_ALL_TESTS();
    return result;

}

