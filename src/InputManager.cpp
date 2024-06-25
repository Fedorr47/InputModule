#include "InputModule.h"

#include <iostream>

namespace InputModule
{

    void InputManager::attach_keyboard_settings(const KeyboardSettings& settings)
    {
    }

    void InputManager::attach_mouse_settings(const MouseSettings& settings)
    {
    }

    InputManager* InputManager::get_instance()
    {
        try
        {
            // Create an instance only once for all threads
            std::call_once(init_flag_, []()
                {
                    instance_ = std::make_unique<InputManager>(Private());
                }
            );
        }
        catch (const std::exception& exception)
        {
            std::cerr << "Failed to create InputManager instance: " << exception.what() << '\n';
        }
            
        return instance_.get();
    }
}