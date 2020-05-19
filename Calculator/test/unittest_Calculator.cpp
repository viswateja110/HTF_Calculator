#include "gtest/gtest.h"
#include "Calculator.h"

TEST(CalculatorTest, ObjCreationTest){
	EXPECT_NO_THROW({Calculator cObj(6,3);});
}

TEST(CalculatorTest, AdditionTest){
	Calculator calObj(4,2);
	EXPECT_EQ(6,calObj.add());
}

TEST(CalculatorTest,SubtractionTest){
	Calculator calObj(5,2);
	EXPECT_EQ(3,calObj.subtract());
}

TEST(CalculatorTest,MultiplicationTest){
        Calculator calObj(4,3);
        EXPECT_EQ(12,calObj.multiply());
}

TEST(CalculatorTest,DivisionTest){
        Calculator calObj(6,3);
        EXPECT_EQ(2,calObj.divide());
}

TEST(CalculatorTest,DividebyZeroTest){
        Calculator calObj(5,0);
        EXPECT_NO_THROW(calObj.divide());
}



