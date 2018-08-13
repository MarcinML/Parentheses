#include <gtest/gtest.h>
#include "Braces.hpp"

struct BracesTests : public ::testing::Test
{
    Braces b;
};

TEST_F(BracesTests, assertThatFirstBracketIsAnOpeningBracket)
{
    ASSERT_TRUE(b.checkBrackets("("));
    ASSERT_TRUE(b.checkBrackets("["));
    ASSERT_TRUE(b.checkBrackets("{"));
}

TEST_F(BracesTests, assertThatIfEmptyInputOutputWillBeFalse)
{
    ASSERT_FALSE(b.checkBrackets(""));
}

TEST_F(BracesTests, assertThatEveryOpenedBracketHasClosingBracket)
{
    ASSERT_TRUE(b.checkBrackets("()"));
    ASSERT_TRUE(b.checkBrackets("{}"));
    ASSERT_TRUE(b.checkBrackets("[]"));
}
TEST_F(BracesTests, assertThatEveryBracketHasPair)
{
    ASSERT_FALSE(b.checkBrackets("())"));
    ASSERT_FALSE(b.checkBrackets("{}}"));
    ASSERT_FALSE(b.checkBrackets("[]]"));
}

TEST_F(BracesTests, assertThatProperCombinationOfBracketsIsTrue)
{
    ASSERT_TRUE(b.checkBrackets("[({})]"));
}

TEST_F(BracesTests, assertThatWrongCombinationOfBracketsIsFalse)
{
    ASSERT_FALSE(b.checkBrackets("{{)(}}"));
    ASSERT_FALSE(b.checkBrackets("({)}"));
}


