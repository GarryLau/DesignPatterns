#ifndef _WINDOW_H_
#define _WINDOW_H_
#ifdef __cplusplus
extern "C"{
#endif

class Window
{
    /* Ϊ��֤�̳����ܹ��������Ĭ�Ϲ��캯��֮��Ĺ��캯����
        ����Ĺ��캯������������private���𡢲���������delete��
        ���Զ����protected��public���͵ģ�����ʱdefault */
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