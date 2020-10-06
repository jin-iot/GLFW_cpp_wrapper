#ifndef __GLFW3_HPP__
#define __GLFW3_HPP__

#include <cstring>

extern "C++"
{
namespace glfw
{

namespace input
{
enum
{
    RELEASE                = GLFW_RELEASE,
    PRESS                  = GLFW_PRESS,
    REPEAT                 = GLFW_REPEAT
};
enum hat_state
{
    HAT_CENTERED           = GLFW_HAT_CENTERED,
    HAT_UP                 = GLFW_HAT_UP,
    HAT_RIGHT              = GLFW_HAT_RIGHT,
    HAT_DOWN               = GLFW_HAT_DOWN,
    HAT_LEFT               = GLFW_HAT_LEFT,
    HAT_RIGHT_UP           = (HAT_RIGHT | HAT_UP),
    HAT_RIGHT_DOWN         = (HAT_RIGHT | HAT_DOWN),
    HAT_LEFT_UP            = (HAT_LEFT  | HAT_UP),
    HAT_LEFT_DOWN          = (HAT_LEFT  | HAT_DOWN)
};
enum keys
{
    KEY_UNKNOWN            = -1,

    KEY_SPACE              = 32,
    KEY_APOSTROPHE         = 39,  /* ' */
    KEY_COMMA              = 44,  /* , */
    KEY_MINUS              = 45,  /* - */
    KEY_PERIOD             = 46,  /* . */
    KEY_SLASH              = 47,  /* / */
    KEY_0                  = 48,
    KEY_1                  = 49,
    KEY_2                  = 50,
    KEY_3                  = 51,
    KEY_4                  = 52,
    KEY_5                  = 53,
    KEY_6                  = 54,
    KEY_7                  = 55,
    KEY_8                  = 56,
    KEY_9                  = 57,
    KEY_SEMICOLON          = 59,  /* ; */
    KEY_EQUAL              = 61,  /* = */
    KEY_A                  = 65,
    KEY_B                  = 66,
    KEY_C                  = 67,
    KEY_D                  = 68,
    KEY_E                  = 69,
    KEY_F                  = 70,
    KEY_G                  = 71,
    KEY_H                  = 72,
    KEY_I                  = 73,
    KEY_J                  = 74,
    KEY_K                  = 75,
    KEY_L                  = 76,
    KEY_M                  = 77,
    KEY_N                  = 78,
    KEY_O                  = 79,
    KEY_P                  = 80,
    KEY_Q                  = 81,
    KEY_R                  = 82,
    KEY_S                  = 83,
    KEY_T                  = 84,
    KEY_U                  = 85,
    KEY_V                  = 86,
    KEY_W                  = 87,
    KEY_X                  = 88,
    KEY_Y                  = 89,
    KEY_Z                  = 90,
    KEY_LEFT_BRACKET       = 91,  /* [ */
    KEY_BACKSLASH          = 92,  /* \ */
    KEY_RIGHT_BRACKET      = 93,  /* ] */
    KEY_GRAVE_ACCENT       = 96,  /* ` */
    KEY_WORLD_1            = 161, /* non-US #1 */
    KEY_WORLD_2            = 162, /* non-US #2 */

    /* Function keys */
    KEY_ESCAPE             = 256,
    KEY_ENTER              = 257,
    KEY_TAB                = 258,
    KEY_BACKSPACE          = 259,
    KEY_INSERT             = 260,
    KEY_DELETE             = 261,
    KEY_RIGHT              = 262,
    KEY_LEFT               = 263,
    KEY_DOWN               = 264,
    KEY_UP                 = 265,
    KEY_PAGE_UP            = 266,
    KEY_PAGE_DOWN          = 267,
    KEY_HOME               = 268,
    KEY_END                = 269,
    KEY_CAPS_LOCK          = 280,
    KEY_SCROLL_LOCK        = 281,
    KEY_NUM_LOCK           = 282,
    KEY_PRINT_SCREEN       = 283,
    KEY_PAUSE              = 284,
    KEY_F1                 = 290,
    KEY_F2                 = 291,
    KEY_F3                 = 292,
    KEY_F4                 = 293,
    KEY_F5                 = 294,
    KEY_F6                 = 295,
    KEY_F7                 = 296,
    KEY_F8                 = 297,
    KEY_F9                 = 298,
    KEY_F10                = 299,
    KEY_F11                = 300,
    KEY_F12                = 301,
    KEY_F13                = 302,
    KEY_F14                = 303,
    KEY_F15                = 304,
    KEY_F16                = 305,
    KEY_F17                = 306,
    KEY_F18                = 307,
    KEY_F19                = 308,
    KEY_F20                = 309,
    KEY_F21                = 310,
    KEY_F22                = 311,
    KEY_F23                = 312,
    KEY_F24                = 313,
    KEY_F25                = 314,
    KEY_KP_0               = 320,
    KEY_KP_1               = 321,
    KEY_KP_2               = 322,
    KEY_KP_3               = 323,
    KEY_KP_4               = 324,
    KEY_KP_5               = 325,
    KEY_KP_6               = 326,
    KEY_KP_7               = 327,
    KEY_KP_8               = 328,
    KEY_KP_9               = 329,
    KEY_KP_DECIMAL         = 330,
    KEY_KP_DIVIDE          = 331,
    KEY_KP_MULTIPLY        = 332,
    KEY_KP_SUBTRACT        = 333,
    KEY_KP_ADD             = 334,
    KEY_KP_ENTER           = 335,
    KEY_KP_EQUAL           = 336,
    KEY_LEFT_SHIFT         = 340,
    KEY_LEFT_CONTROL       = 341,
    KEY_LEFT_ALT           = 342,
    KEY_LEFT_SUPER         = 343,
    KEY_RIGHT_SHIFT        = 344,
    KEY_RIGHT_CONTROL      = 345,
    KEY_RIGHT_ALT          = 346,
    KEY_RIGHT_SUPER        = 347,
    KEY_MENU               = 348,

    KEY_LAST               = KEY_MENU
};
enum mods
{
    MOD_SHIFT           = 0x0001,
    MOD_CONTROL         = 0x0002,
    MOD_ALT             = 0x0004,
    MOD_SUPER           = 0x0008,
    MOD_CAPS_LOCK       = 0x0010,
    MOD_NUM_LOCK        = 0x0020
};
enum buttons
{
    MOUSE_BUTTON_1         = 0,
    MOUSE_BUTTON_2         = 1,
    MOUSE_BUTTON_3         = 2,
    MOUSE_BUTTON_4         = 3,
    MOUSE_BUTTON_5         = 4,
    MOUSE_BUTTON_6         = 5,
    MOUSE_BUTTON_7         = 6,
    MOUSE_BUTTON_8         = 7,
    MOUSE_BUTTON_LAST      = MOUSE_BUTTON_8,
    MOUSE_BUTTON_LEFT      = MOUSE_BUTTON_1,
    MOUSE_BUTTON_RIGHT     = MOUSE_BUTTON_2,
    MOUSE_BUTTON_MIDDLE    = MOUSE_BUTTON_3
};
enum joysticks
{
    JOYSTICK_1             = 0,
    JOYSTICK_2             = 1,
    JOYSTICK_3             = 2,
    JOYSTICK_4             = 3,
    JOYSTICK_5             = 4,
    JOYSTICK_6             = 5,
    JOYSTICK_7             = 6,
    JOYSTICK_8             = 7,
    JOYSTICK_9             = 8,
    JOYSTICK_10            = 9,
    JOYSTICK_11            = 10,
    JOYSTICK_12            = 11,
    JOYSTICK_13            = 12,
    JOYSTICK_14            = 13,
    JOYSTICK_15            = 14,
    JOYSTICK_16            = 15,
    JOYSTICK_LAST          = JOYSTICK_16
};
enum gamepad_buttons
{
    GAMEPAD_BUTTON_A               = 0,
    GAMEPAD_BUTTON_B               = 1,
    GAMEPAD_BUTTON_X               = 2,
    GAMEPAD_BUTTON_Y               = 3,
    GAMEPAD_BUTTON_LEFT_BUMPER     = 4,
    GAMEPAD_BUTTON_RIGHT_BUMPER    = 5,
    GAMEPAD_BUTTON_BACK            = 6,
    GAMEPAD_BUTTON_START           = 7,
    GAMEPAD_BUTTON_GUIDE           = 8,
    GAMEPAD_BUTTON_LEFT_THUMB      = 9,
    GAMEPAD_BUTTON_RIGHT_THUMB     = 10,
    GAMEPAD_BUTTON_DPAD_UP         = 11,
    GAMEPAD_BUTTON_DPAD_RIGHT      = 12,
    GAMEPAD_BUTTON_DPAD_DOWN       = 13,
    GAMEPAD_BUTTON_DPAD_LEFT       = 14,
    GAMEPAD_BUTTON_LAST            = GAMEPAD_BUTTON_DPAD_LEFT,

    GAMEPAD_BUTTON_CROSS           = GAMEPAD_BUTTON_A,
    GAMEPAD_BUTTON_CIRCLE          = GAMEPAD_BUTTON_B,
    GAMEPAD_BUTTON_SQUARE          = GAMEPAD_BUTTON_X,
    GAMEPAD_BUTTON_TRIANGLE        = GAMEPAD_BUTTON_Y
};
enum gamepad_axes
{
    GAMEPAD_AXIS_LEFT_X        = 0,
    GAMEPAD_AXIS_LEFT_Y        = 1,
    GAMEPAD_AXIS_RIGHT_X       = 2,
    GAMEPAD_AXIS_RIGHT_Y       = 3,
    GAMEPAD_AXIS_LEFT_TRIGGER  = 4,
    GAMEPAD_AXIS_RIGHT_TRIGGER = 5,
    GAMEPAD_AXIS_LAST          = GAMEPAD_AXIS_RIGHT_TRIGGER
};
}

inline int init() { return glfwInit(); }
inline void terminate() { glfwTerminate(); }

template <class type__>
struct __base_pos
{
    type__ __x;
    type__ __y;
    __base_pos() : __x(0), __y(0) { }
    __base_pos(type__ x, type__ y)
        : __x(x), __y(y) {}
    virtual ~__base_pos() {}
};
template <class type__>
struct __base_size
{
    type__ __width;
    type__ __height;
    __base_size() : __width(0), __height(0) { }
    __base_size(type__ width, type__ height)
        : __width(width), __height(height) {}
    virtual constexpr int area() { return this->__width * this->__height; }
    virtual ~__base_size() {}
};

struct size_2d : public __base_size<int>
{
    size_2d() : __base_size<int>() { }
    size_2d(int width, int height) : __base_size<int>(width, height) {}
    constexpr int width() { return this->__width; }
    constexpr int height() { return this->__height; }
    void operator()(int width, int height)
    {
        this->__width = width;
        this->__height = height;
    }
    void operator()(size_2d& _size)
    {
        this->__width = _size.width();
        this->__height = _size.height();
    }
    virtual ~size_2d() {}
};

class image
{
    friend class window;
protected:
    GLFWimage* __img;

public:
    image(size_2d _size, uint8_t* _buffers)
    {
        this->__img->width = _size.width();
        this->__img->height = _size.height();
        this->__img->pixels = new uint8_t[sizeof(_buffers)];
        std::memcpy(this->__img->pixels, _buffers, sizeof(_buffers));
    }
    image(size_2d& _size, uint8_t* _buffers, size_t _buf_size)
    {
        this->__img->width = _size.width();
        this->__img->height = _size.height();
        this->__img->pixels = new uint8_t[_buf_size];
        std::memcpy(this->__img->pixels, _buffers, _buf_size);
    }
    uint8_t* data() { return this->__img->pixels; }
    const size_2d size() { return size_2d(this->__img->width, this->__img->height); }
    const GLFWimage* c_image() { return this->__img; }
    ~image()
    {
        if (this->__img != nullptr)
        {
            if (this->__img->pixels) delete[] this->__img->pixels;
            delete this->__img;
        }
    }
};

class monitor
{
private:
    GLFWmonitor* __monitor;
    int __xpos, __ypos;
public:
    monitor()
    {
        this->__monitor = glfwGetPrimaryMonitor();
        glfwGetMonitorPos(this->__monitor, &this->__xpos, &this->__ypos);
    }
    monitor(GLFWmonitor* _glfw_monitor)
    {
        this->__monitor = _glfw_monitor;
        glfwGetMonitorPos(this->__monitor, &this->__xpos, &this->__ypos);
    }
    constexpr GLFWmonitor* c_monitor() { return this->__monitor; }
    template<typename _tpl_vector>
    static const _tpl_vector monitors()
    {
        int count_monitors = 0;
        auto _monitors = glfwGetMonitors(&count_monitors);
        _tpl_vector _monitors_vec(&count_monitors);
        for (auto idx_m = 0; idx_m < count_monitors; idx_m++)
            _monitors_vec.emplace_back(monitor(_monitors_vec[idx_m]));
        return _monitors_vec;
    }

    
    virtual ~monitor()
    {

    }
};

class window
{
protected:
    GLFWwindow* __window;
    GLFWmonitor* __monitor;
    size_2d __window_size;
    char* __window_name;
    GLFWwindow* __shared_window;
    bool __alive;

public:
    window(size_2d _size) : __window_size(_size)
    {
        this->__window_name = new char[0];
    }
    
    template<typename __stl_str_t>
    window(size_2d _size,
        __stl_str_t& _window_name)
        : __window_size(_size)
    {
        size_t window_name_size = _window_name.size();
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name.c_str());
        }
        else this->__window_name = new char[0];
        this->__monitor = nullptr;
        this->__shared_window = nullptr;
    }
    window(size_2d _size,
        const char* _window_name)
        : __window_size(_size)
    {
        size_t window_name_size = strlen(_window_name);
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name);
        }
        else this->__window_name = new char[0];
        this->__monitor = nullptr;
        this->__shared_window = nullptr;
    }

    template<typename __stl_str_t>
    window(size_2d _size,
        __stl_str_t& _window_name, monitor& _monitor)
        : __window_size(_size), __monitor(_monitor.c_monitor())
    {
        size_t window_name_size = _window_name.size();
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name.c_str());
        }
        else this->__window_name = new char[0];
        this->__shared_window = nullptr;
    }
    window(size_2d _size,
        const char* _window_name, monitor& _monitor)
        : __window_size(_size), __monitor(_monitor.c_monitor())
    {
        size_t window_name_size = strlen(_window_name);
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name);
        }
        else this->__window_name = new char[0];
        this->__shared_window = nullptr;
    }

    template<typename __stl_str_t>
    window(size_2d _size,
        __stl_str_t& _window_name, window& _shared_window)
        : __window_size(_size), __shared_window(_shared_window.c_window())
    {
        size_t window_name_size = _window_name.size();
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name.c_str());
        }
        else this->__window_name = new char[0];
        this->__monitor = nullptr;
    }
    window(size_2d _size,
        const char* _window_name, window& _shared_window)
        : __window_size(_size), __shared_window(_shared_window.c_window())
    {
        size_t window_name_size = strlen(_window_name);
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name);
        }
        else this->__window_name = new char[0];
        this->__monitor = nullptr;
    }

    template<typename __stl_str_t>
    window(size_2d _size, __stl_str_t& _window_name,
        monitor& _monitor, window& _shared_window)
        : __window_size(_size), __monitor(_monitor.c_monitor()),
            __shared_window(_shared_window.c_window())
    {
        size_t window_name_size = _window_name.size();
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name.c_str());
        }
        else this->__window_name = new char[0];
    }
    window(size_2d _size, const char* _window_name,
            monitor& _monitor, window& _shared_window)
        : __window_size(_size), __monitor(_monitor.c_monitor()),
            __shared_window(_shared_window.c_window())
    {
        size_t window_name_size = strlen(_window_name);
        if (window_name_size)
        {
            this->__window_name = new char[window_name_size];
            std::strcpy(this->__window_name, _window_name);
        }
        else this->__window_name = new char[0];
    }
    
    bool open()
    {
        this->__window = glfwCreateWindow(
            this->__window_size.width(),
            this->__window_size.height(),
            this->__window_name,
            this->__monitor,
            this->__shared_window
        );

        if (this->__window != nullptr)
            this->__alive = true;
        return this->__window != nullptr;
    }
    int close()
    {
        int ret = 0;
        if (this->__window != nullptr)
            ret = glfwWindowShouldClose(this->__window);
        return ret;
    }

    constexpr GLFWwindow* c_window() { return this->__window; }
    void set_title(const char* _title)
    {
        if (this->__window_name != nullptr)
            delete[] this->__window_name;
        this->__window_name = new char[std::strlen(_title)];
        std::strcpy(this->__window_name, _title);
    }
    template<typename _stl_str_t>
    void set_title(_stl_str_t& _title)
    {
        if (this->__window_name != nullptr)
            delete[] this->__window_name;
        this->__window_name = new char[_title.size()];
        std::strcpy(this->__window_name, _title.c_str());
    }
    void set_size(size_2d& _size)
    {
        this->__window_size(_size);
        glfwSetWindowSize(this->__window, this->__window_size.width(),
            this->__window_size.height());
    }
    void set_size(int _width, int _height)
    {
        this->__window_size(_width, _height);
        glfwSetWindowSize(this->__window, this->__window_size.width(),
            this->__window_size.height());
    }

    void set_icon(image& _image)
    {
        glfwSetWindowIcon(this->__window, 1, {_image.__img});
    }
    template<typename _stl_vector>
    void set_icon(_stl_vector& _images)
    {
        GLFWimage* __images_c = _images.size();
        auto i = 0;
        for (auto& _image : _images)
            __images_c[i++] = _image.__img;
        glfwSetWindowIcon(this->__window, _images.size(), __images_c);
        if (__images_c != nullptr) delete[] __images_c;
    }
    void set_icon(int _count, GLFWimage* _images)
    {
        glfwSetWindowIcon(this->__window, _count, _images);
    }

    inline const size_2d size() { return this->__window_size; }
    constexpr char* title() { return this->__window_name; }
    constexpr bool alive() { return this->__alive; }
    inline const monitor wnd_monitor() { return this->__monitor; }

    inline bool visible()
    {
        return glfwGetWindowAttrib(this->__window, GLFW_VISIBLE);
    }
    inline bool focused()
    {
        return glfwGetWindowAttrib(this->__window, GLFW_FOCUSED);
    }

    void make_context_current() { glfwMakeContextCurrent(this->__window); }
    void show() { glfwShowWindow(this->__window); }
    void hide() { glfwHideWindow(this->__window); }
    void request_attention() { glfwRequestWindowAttention(this->__window); }
    bool is_current_context()
    {
        return (__ptr_t)this->__window == (__ptr_t)glfwGetCurrentContext();
    }


    virtual ~window()
    {
        if (this->__window_name != nullptr)
            delete[] this->__window_name;
        if (this->__window != nullptr)
            glfwDestroyWindow(this->__window);
    }
};



}
}

#endif // __GLFW3_HPP__
