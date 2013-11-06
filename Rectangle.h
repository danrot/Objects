#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

static void rectangle_draw(void* obj);

struct Rectangle {
    void* super;
    void (*draw) (void* obj);
} RectangleClass = { &ShapeClass, &rectangle_draw };

struct RectangleObject {
    struct Rectangle* pClass;
    int x;
    int y;
    int w;
    int l;
};

struct RectangleObject* ro_construct();

static void rectangle_draw(void* obj) {
    struct RectangleObject* rectangle = (struct RectangleObject*) obj;
    printf("Rectangle: %d, %d, %d, %d\n", rectangle->x, rectangle->y, rectangle->w, rectangle->l);
}
#endif

