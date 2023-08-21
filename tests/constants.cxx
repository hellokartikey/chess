#include <gtest/gtest.h>

#include <chess++/constants.hxx>

using namespace chess::constants;

TEST(ConstantsTest, FileTest) {
  EXPECT_EQ(A, 0);
  EXPECT_EQ(B, 1);
  EXPECT_EQ(C, 2);
  EXPECT_EQ(D, 3);
  EXPECT_EQ(E, 4);
  EXPECT_EQ(F, 5);
  EXPECT_EQ(G, 6);
  EXPECT_EQ(H, 7);
}

TEST(ConstantsTest, RankTest) {
  EXPECT_EQ(R1, 0);
  EXPECT_EQ(R2, 1);
  EXPECT_EQ(R3, 2);
  EXPECT_EQ(R4, 3);
  EXPECT_EQ(R5, 4);
  EXPECT_EQ(R6, 5);
  EXPECT_EQ(R7, 6);
  EXPECT_EQ(R8, 7);
}
