#include <gtest/gtest.h>

class ClassTest : public testing::Test {
};

TEST_F(ClassTest, TestIt) {
    ASSERT_EQ(true, true);
}
