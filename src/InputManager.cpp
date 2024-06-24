#include "InputModule.h"

namespace InputModule
{
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
        catch ([[maybe_unused]] const std::exception& exception)
        {
            throw;
        }
            
        return instance_.get();
    }
}