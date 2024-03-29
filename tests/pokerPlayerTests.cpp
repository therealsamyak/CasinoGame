#include "../header/pokerPlayer.hpp"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;


TEST(pokerPlayerTests, validConstuctor){
  EXPECT_NO_THROW(PokerPlayer temp = PokerPlayer("Alex"));
}

TEST(pokerPlayerTests, getName1){
  PokerPlayer temp = PokerPlayer("Alex");
  EXPECT_EQ(temp.getName(), "Alex");
}

TEST(pokerPlayerTests, getName2){
  PokerPlayer temp = PokerPlayer("Alex", 300);
  EXPECT_EQ(temp.getName(), "Alex");
}

TEST(pokerPlayerTests, getBalance1){
  PokerPlayer temp = PokerPlayer("Alex");
  EXPECT_NO_THROW(temp.getPlayerBalance()->getBalance());
}

TEST(pokerPlayerTests, getBalance2){
  PokerPlayer temp = PokerPlayer("Alex", 300);
  EXPECT_NO_THROW(temp.getPlayerBalance()->getBalance());
}

TEST(pokerPlayerTests, updateStats){
  PokerPlayer temp = PokerPlayer("Alex");
  EXPECT_NO_THROW(temp.updateStatistics(20, 300));
}

TEST(pokerPlayerTests, printStats){
  PokerPlayer temp = PokerPlayer("Alex");
  EXPECT_NO_THROW(temp.viewStatistics());
}

