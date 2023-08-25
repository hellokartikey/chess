#include <gtest/gtest.h>

#include <chess++/core.hxx>

using namespace chess;

TEST(ConstantsTest, FileTest) {
  EXPECT_EQ(constants::file::A, 0);
  EXPECT_EQ(constants::file::B, 1);
  EXPECT_EQ(constants::file::C, 2);
  EXPECT_EQ(constants::file::D, 3);
  EXPECT_EQ(constants::file::E, 4);
  EXPECT_EQ(constants::file::F, 5);
  EXPECT_EQ(constants::file::G, 6);
  EXPECT_EQ(constants::file::H, 7);
}

TEST(ConstantsTest, RankTest) {
  EXPECT_EQ(constants::rank::R1, 0);
  EXPECT_EQ(constants::rank::R2, 1);
  EXPECT_EQ(constants::rank::R3, 2);
  EXPECT_EQ(constants::rank::R4, 3);
  EXPECT_EQ(constants::rank::R5, 4);
  EXPECT_EQ(constants::rank::R6, 5);
  EXPECT_EQ(constants::rank::R7, 6);
  EXPECT_EQ(constants::rank::R8, 7);
}
