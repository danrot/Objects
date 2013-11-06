#ifndef SHAPE_H
#define SHAPE_H

#include <stdlib.h>
#include <stdio.h>

static void shape_draw(void* obj);

struct Shape {
    void* super;
    void (*draw) (void* obj);
} ShapeClass = { NULL, &shape_draw};

struct ShapeObject {
    struct Shape* pClass;
};

struct ShapeObject* so_construct();

static void shape_draw(void* obj) {
    printf("Shape cannot be drawn");
}
#endif

