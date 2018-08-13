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
