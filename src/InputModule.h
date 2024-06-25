#pragma once

#include <mutex>

#include "Keyboard.h"

namespace InputModule
{
    class KeyboardSettings
    {
        Key key_code;
    public:

    };

    class MouseSettings
    {};

    // InputManager class - singleton for input management
    // Use a hack with a private nested struct
    // to avoid creating objects of this class elsewhere,
    // but still allow the use of make_unique
    class InputManager
    {
    private:
        struct Private { explicit Private() = default; };

        InputManager() = default;

        static inline std::once_flag init_flag_;
        static inline std::unique_ptr<InputManager> instance_{ nullptr };

        // TODO: it can be transformed to pointers later
        KeyboardSettings keyboard_settings_;
        MouseSettings mouse_settings_;

        template <typename T>
        bool KeyIsInBounds(const T& value) requires std::integral<T>
        {
            return (value >= UnknownKey) && (KeyCount > value);
        }

    public:
        InputManager(const InputManager&) = delete;
        InputManager(InputManager&&) = delete;
        InputManager(Private) {}
        ~InputManager() = default;

        InputManager& operator=(const InputManager&) = delete;
        InputManager& operator=(InputManager&&) = delete;
        
        static InputManager* get_instance();

        void attach_keyboard_settings(const KeyboardSettings& settings);
        void attach_mouse_settings(const MouseSettings& settings);

        template <typename T>
        Key get_key_code(T code) requires std::integral<T>
        {
            if (!KeyIsInBounds(code))
            {
                return Key::Unknown;
            }
            return static_cast<Key>(code);
        }
    };
}
