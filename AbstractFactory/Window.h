#ifndef _WINDOW_H_
#define _WINDOW_H_
#ifdef __cplusplus
extern "C"{
#endif

class Window
{
    /* 为保证继承类能够定义除了默认构造函数之外的构造函数，
        基类的构造函数不能声明成private级别、不能声明成delete，
        可以定义成protected、public类型的，可以时default */
protected:
    Window() = default;
    ~Window() = default;
public:
    virtual Window * addWindow() = 0;
};


#ifdef __cplusplus
}
#endif
#endif