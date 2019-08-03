#include "Rect.h"
#include "Adapter.h"

int main() {
    int x = 20;
    int y = 50;
    int w = 300;
    int h = 200;
    Rect *r = new Adapter(x, y, w, h);
    r->draw();

    return 0;
}