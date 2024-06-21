#pragma once

#include <mutex>

namespace InputModule
{
    class InputManager
    {
    private:
        struct Private { explicit Private() = default; };

        static inline std::once_flag init_flag_;
        static inline std::unique_ptr<InputManager> mng_instance_{ nullptr };
    public:
        InputManager(const InputManager&) = delete;
        InputManager(InputManager&&) = delete;
        InputManager(Private) {};
        ~InputManager() = default;

        InputManager& operator=(const InputManager&) = delete;
        InputManager& operator=(InputManager&&) = delete;

        static const InputManager& get_instance();

    protected:
        static std::unique_ptr<InputManager> create()
        {
            return std::make_unique<InputManager>(Private());
        }
    };
}
