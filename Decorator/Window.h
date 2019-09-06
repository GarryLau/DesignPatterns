#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <iostream>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif


    class Window
    {
    public:
        virtual void draw() = 0;
        virtual void getDescription() = 0;
        virtual ~Window(){}
    };

    class SimpleWindow : public Window
    {
    public:
        virtual void draw() override {
            std::cout << "Drawing a simple window." << std::endl;
        }
        virtual void getDescription() override {
            std::cout<< "This is a Simple Window ";
        }
    };

    class WindowDecorator : public Window
    {
    public:
        WindowDecorator(Window * window) : m_decorator_window(window) {}
    protected:
        Window * m_decorator_window;
    };

    class VerticalScrollBarDecorator : public WindowDecorator
    {
    public:
        VerticalScrollBarDecorator(Window * window) : WindowDecorator(window){}
        virtual void draw() override {
            drawVerticalScrollBar();
            m_decorator_window->draw();
        }
        virtual void getDescription() override{
            m_decorator_window->getDescription();
            std::cout << "with vertical scrollbars.\n";
        }
    private:
        void drawVerticalScrollBar() {
            std::cout << "\nDrawing the vertical scrollbar.";
        }
    };

    class HorizontalScrollBarDecorator : public WindowDecorator
    {
    public:
        HorizontalScrollBarDecorator(Window * window) : WindowDecorator(window){}
        virtual void draw() {
            drawHorizontalScrollBar();
            m_decorator_window->draw();
        }
        virtual void getDescription() override{
            m_decorator_window->getDescription();
            std::cout << "with horizontal scrollbars.\n";
        }
    private:
        void drawHorizontalScrollBar() {
            std::cout << "Drawing the horizontal scrollbar.";
        }
    };


#ifdef __cplusplus
}
#endif
#endif
