#include "Graphic.h"


int main() {

    Line aline;
    aline.draw();
    Text atext;
    atext.draw();
    Picture apicture;
    apicture.add(&aline);
    apicture.add(&atext);
    apicture.draw();

    return 0;
}