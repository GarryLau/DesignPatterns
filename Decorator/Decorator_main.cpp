#include "Window.h"

int main() {
    SimpleWindow smpwin;
    VerticalScrollBarDecorator verdecor(&smpwin);
    HorizontalScrollBarDecorator hordecor(&smpwin);

    smpwin.draw();
    smpwin.getDescription();

    verdecor.draw();
    verdecor.getDescription();

    hordecor.draw();
    hordecor.getDescription();

    return 0;
}