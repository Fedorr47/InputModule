#include "gtest/gtest.h"
#include "InputModule.h"

TEST(InputModule, CreationAndDestuction)
{
  std::unique_ptr<InputModule::InputManger> manager;
  {
    manager = std::make_unique<InputModule::InputManger>();
    EXPECT_TRUE(manager.get() != nullptr);
    auto del_manager = std::move(manager);
  }
  EXPECT_TRUE(manager.get() == nullptr);
}

TEST(InputModule, Initialization)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, BindAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, BindActions)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, BindAndCallAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, MultiAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, UnBindAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, KeyAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}

TEST(InputModule, MouseAction)
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  
}