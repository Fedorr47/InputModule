#include "InputModule.h"

namespace InputModule
{
    const InputManager& InputManager::get_instance()
    {
        std::call_once(init_flag_, []()
            {
                mng_instance_ = InputManager::create();
            }
        );
        
        return *mng_instance_.get();
    }
}