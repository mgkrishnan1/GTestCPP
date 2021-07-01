#include <gtest/gtest.h>
#include "source.cpp"

#include <src/gtest.cc>
#include <src/gtest-death-test.cc>
#include <src/gtest-filepath.cc>
#include <src/gtest-port.cc>
#include <src/gtest-printers.cc>
#include <src/gtest-test-part.cc>
#include <src/gtest-typed-test.cc>

TEST(GreaterTest, AisGreater)
{
	EXPECT_EQ(3, GreatestOfThree(3, 1, 2));
}

TEST(GreaterTest, BisGreater)
{
	EXPECT_EQ(3, GreatestOfThree(1, 3, 2));
}

TEST(GreaterTest, CisGreater)
{
	EXPECT_EQ(3, GreatestOfThree(1, 2, 3));
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}