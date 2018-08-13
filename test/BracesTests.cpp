#include <gtest/gtest.h>
#include "Braces.hpp"

struct BracesTests : public ::testing::Test
{
};

TEST_F(BracesTests, assertThatBracesObjectIsExist)
{
    Braces b;
    ASSERT_NE(b.imHere(), 0);
}
