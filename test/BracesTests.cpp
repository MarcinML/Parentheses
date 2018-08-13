#include <gtest/gtest.h>
#include "Braces.hpp"

struct BracesTests : public ::testing::Test
{
};

TEST_F(BracesTests, assertThatFirstBracketIsAnOpeningBracket)
{
    Braces b;

    ASSERT_TRUE(b.checkBrackets("("));
    ASSERT_TRUE(b.checkBrackets("["));
    ASSERT_TRUE(b.checkBrackets("{"));
}

TEST_F(BracesTests, assertThatIfEmptyInputOutputWillBeFalse)
{
    Braces b;
    ASSERT_FALSE(b.checkBrackets(""));
}

TEST_F(BracesTests, assertThatEveryOpenedBracketHasClosingBracket)
{
    Braces b;
    ASSERT_TRUE(b.checkBrackets("()"));
    ASSERT_TRUE(b.checkBrackets("{}"));
    ASSERT_TRUE(b.checkBrackets("[]"));
}

TEST_F(BracesTests, assertThatProperCombinationOfBracketsIsTrue)
{
    Braces b;
    ASSERT_TRUE(b.checkBrackets("[({})]"));
}

TEST_F(BracesTests, assertThatWrongCombinationOfBracketsIsFalse)
{
    Braces b;
    ASSERT_FALSE(b.checkBrackets("{{)(}}"));
    ASSERT_FALSE(b.checkBrackets("({)}"));
}


