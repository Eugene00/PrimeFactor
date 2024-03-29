#include "pch.h"
#include "../PrimeFactor/prime_factor.cpp"
#include <vector>

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected{};
};

using namespace  std;
TEST_F(PrimeFixture, Of1) {
	const vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	const vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	const vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	const vector<int> expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of6) {
	const vector<int> expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of9) {
	const vector<int> expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, Of12) {
	const vector<int> expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}