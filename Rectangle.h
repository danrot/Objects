#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct {
    Shape* super;
    void (*draw) (void* obj);
} Rectangle;

typedef struct {
    Rectangle* pClass;
    int x;
    int y;
    int w;
    int l;
} RectangleObject;

extern Rectangle RectangleClass;

RectangleObject* ro_construct();
#endif

