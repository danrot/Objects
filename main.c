#include "Rectangle.h"

int main(int argc, char** argv) {
    RectangleObject* rectangle = ro_construct(1,2,3,4);
    
    rectangle->pClass->draw(rectangle);
    
    rectangle->pClass->super->draw(rectangle);
}

