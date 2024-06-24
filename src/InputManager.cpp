#include "InputModule.h"

namespace InputModule
{
    InputManager* InputManager::get_instance()
    {
        std::call_once(init_flag_, []()
            {
                mng_instance_ = std::make_unique<InputManager>(Private());
            }
        );
        
        return mng_instance_.get();
    }
}