#include "Drawing.h"
#include "Shape.h"

int main() {
    /* Draw rectangle on PC */
    PCDrawing pc_drawing;
    RectangleShape rect_shape(3, 5, &pc_drawing);
    rect_shape.drawShape();
    /* Draw rectangle on Mobile */
    MobileDrawing mobile_drawing;
    rect_shape = RectangleShape(7, 8, &mobile_drawing);
    rect_shape.drawShape();
    /* Draw circle on PC */
    CircleShape circle_shape(4, &pc_drawing);
    circle_shape.drawShape();
    /* Draw circle on Mobile */
    circle_shape = CircleShape(6, &mobile_drawing);
    circle_shape.drawShape();

    return 0;
}