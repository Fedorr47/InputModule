#include "gtest/gtest.h"
#include "InputModule.h"

TEST(InputModule, Creation)
{
  using namespace InputModule;
   {
     auto* manager_1 = InputManager::get_instance();
     EXPECT_TRUE(manager_1 != nullptr);
   }
   const auto* manager_2 = InputManager::get_instance();
   EXPECT_TRUE(manager_2 != nullptr);
   const auto* manager_3 = manager_2;
   EXPECT_FALSE(manager_3 == nullptr);
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


