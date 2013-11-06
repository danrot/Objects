#include "Rectangle.h"
#include <stdio.h>

static void rectangle_draw(void* obj);

Rectangle RectangleClass = { &ShapeClass, &rectangle_draw };

RectangleObject* ro_construct(RectangleObject* obj, int x, int y, int w, int l) {
    obj->pClass = &RectangleClass;
    obj->x = x;
    obj->y = y;
    obj->w = w;
    obj->l = l;
    
    return obj;
}

static void rectangle_draw(void* obj) {
    RectangleObject* rectangle = (RectangleObject*) obj;
    printf("Rectangle: %d, %d, %d, %d\n", rectangle->x, rectangle->y, rectangle->w, rectangle->l);
}

