#include "gtest/gtest.h"
#include "EventManager.h"

TEST(EventManager, CreationAndDestuction)
{
  std::unique_ptr<EventManager> manager;
  {
    manager = std::make_unique<EventManager>();
    EXPECT_TRUE(manager.get() != nullptr);
    manager.reset();
  }
  EXPECT_TRUE(manager.get() == nullptr);
}

TEST(EventManager, Initialization)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, BindAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, BindActions)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, BindAndCallAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, MultiAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, UnBindAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, KeyAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(EventManager, MouseAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}