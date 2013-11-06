#include <stdlib.h>
#include <stdio.h>
#include "Shape.h"

static void shape_draw(void* obj);

Shape ShapeClass = { NULL, &shape_draw};

ShapeObject* so_construct() {
    ShapeObject* obj = (ShapeObject*) malloc(sizeof(ShapeObject));
    obj->pClass = &ShapeClass;
    return obj;
}

static void shape_draw(void* obj) {
    printf("Shape cannot be drawn\n");
}

