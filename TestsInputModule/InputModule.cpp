#include "gtest/gtest.h"
#include "InputModule.h"

using namespace InputModule;

class InputManagerTest : public testing::Test {
protected:
    InputManagerTest() {
        manager_ = InputManager::get_instance();
    }

    ~InputManagerTest() override = default;
    InputManager* manager_;
};

TEST_F(InputManagerTest, Creation)
{
    EXPECT_TRUE(manager_ != nullptr);
}

TEST_F(InputManagerTest, TestKey)
{
    auto lKeyCount = KeyCount;
    EXPECT_EQ(Key::Unknown, manager_->get_key_code(-1));
    EXPECT_EQ(Key::A, manager_->get_key_code(0));
    EXPECT_EQ(Key::Pause, manager_->get_key_code(--lKeyCount));
    EXPECT_TRUE(manager_->get_key_code(-2) == Key::Unknown);
    EXPECT_TRUE(manager_->get_key_code(++lKeyCount) == Key::Unknown);
}

TEST_F(InputManagerTest, AttachKeyboardSettings) 
{
   
}


TEST(InputModule, AttachMouseSettings)
{

}

TEST(InputModule, BindAction)
{
  
  EXPECT_TRUE(true);
  
}

TEST(InputModule, BindActions)
{

  EXPECT_TRUE(true);
  
}

TEST(InputModule, BindAndCallAction)
{

  EXPECT_TRUE(true);
  
}

TEST(InputModule, MultiAction)
{

  EXPECT_TRUE(true);
  
}

TEST(InputModule, UnBindAction)
{

  EXPECT_TRUE(true);
  
}

TEST(InputModule, KeyAction)
{

  EXPECT_TRUE(true);
  
}

TEST(InputModule, MouseAction)
{

  EXPECT_TRUE(true);
  
}


