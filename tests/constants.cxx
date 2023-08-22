#include <gtest/gtest.h>

#include <chess++/core.hxx>

using namespace chess;

TEST(ConstantsTest, FileTest) {
  EXPECT_EQ(file::A, 0);
  EXPECT_EQ(file::B, 1);
  EXPECT_EQ(file::C, 2);
  EXPECT_EQ(file::D, 3);
  EXPECT_EQ(file::E, 4);
  EXPECT_EQ(file::F, 5);
  EXPECT_EQ(file::G, 6);
  EXPECT_EQ(file::H, 7);
}

TEST(ConstantsTest, RankTest) {
  EXPECT_EQ(rank::R1, 0);
  EXPECT_EQ(rank::R2, 1);
  EXPECT_EQ(rank::R3, 2);
  EXPECT_EQ(rank::R4, 3);
  EXPECT_EQ(rank::R5, 4);
  EXPECT_EQ(rank::R6, 5);
  EXPECT_EQ(rank::R7, 6);
  EXPECT_EQ(rank::R8, 7);
}
