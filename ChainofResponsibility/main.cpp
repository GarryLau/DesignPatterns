#include "Photo.h"
#include "PhotoProcessor.h"

int main() {
    Photo photo("Wedding Photo");

    ColorMatch color_match;
    RedEye red_eye;
    Filter filter;
    Scale scale;

    scale.setNextProcessor(&red_eye);
    red_eye.setNextProcessor(&color_match);
    color_match.setNextProcessor(&filter);

    scale.Process(photo);

    return 0;
}