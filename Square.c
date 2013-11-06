#include "Square.h"

#include <stdio.h>

static void square_draw(void* obj);

Square SquareClass = { &RectangleClass, &square_draw };

SquareObject* sqo_construct(SquareObject* obj, int x, int y, int w) {
    obj = (SquareObject*) ro_construct((RectangleObject*) obj, x, y, w, w);
    obj->pClass = &SquareClass;
    
    return obj;
}

static void square_draw(void* obj) {
    SquareObject* square = (SquareObject*) obj;
    printf("Square: %d, %d, %d\n", square->x, square->y, square->w);
}

