#pragma once

#include <mutex>

namespace InputModule
{
    class InputManager
    {
    private:
        struct Private { explicit Private() = default; };

        InputManager() = default;

        static inline std::once_flag init_flag_;
        static inline std::unique_ptr<InputManager> instance_{ nullptr };
    public:
        InputManager(const InputManager&) = delete;
        InputManager(InputManager&&) = delete;
        // Use a hack with a private nested struct
        // to avoid creating objects of this class elsewhere,
        // but still allow the use of make_unique
        InputManager(Private) {}
        ~InputManager() = default;

        InputManager& operator=(const InputManager&) = delete;
        InputManager& operator=(InputManager&&) = delete;

        // Get an instance of a input manager
        static InputManager* get_instance();
    };
}
