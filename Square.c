#include "Square.h"

#include <stdlib.h>
#include <stdio.h>

static void square_draw(void* obj);

Square SquareClass = { &RectangleClass, &square_draw };

SquareObject* sqo_construct(int x, int y, int w) {
    SquareObject* obj = (SquareObject*) malloc(sizeof(SquareObject));
    obj = (SquareObject*) ro_construct(x, y, w, w);
    obj->pClass = &SquareClass;
    
    return obj;
}

static void square_draw(void* obj) {
    SquareObject* square = (SquareObject*) obj;
    printf("Square: %d, %d, %d\n", square->x, square->y, square->w);
}

