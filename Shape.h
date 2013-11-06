#ifndef SHAPE_H
#define SHAPE_H

typedef struct {
    void* super;
    void (*draw) (void* obj);
} Shape;

typedef struct {
    Shape* pClass;
} ShapeObject;

extern Shape ShapeClass;

ShapeObject* so_construct();
#endif

