#ifndef _SCROLLBAR_H_
#define _SCROLLBAR_H_

#ifdef __cplusplus
extern "C"{
#endif


class ScrollBar
{
protected:
    ScrollBar() = default;
    ~ScrollBar() = default;
public:
    virtual ScrollBar * addScrollBar() = 0;
};


#ifdef __cplusplus
}
#endif
#endif