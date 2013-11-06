#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

typedef struct {
    Rectangle* super;
    void (*draw) (void* obj);
} Square;

typedef struct {
    Square* pClass;
    int x;
    int y;
    int w;
    int l;
} SquareObject;

extern Square SquareClass;

SquareObject* sqo_construct(SquareObject* obj, int x, int y, int w);
#endif

