#include "Shape.h"

struct ShapeObject* so_construct() {
    struct ShapeObject* obj = (struct ShapeObject*) malloc(sizeof(struct ShapeObject));
    obj->pClass = &ShapeClass;
    return obj;
}

