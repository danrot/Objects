#include "Rectangle.h"

struct RectangleObject* ro_construct(int x, int y, int w, int l) {
    struct RectangleObject* obj = (struct RectangleObject*) malloc(sizeof(struct RectangleObject));
    obj->pClass = &RectangleClass;
    obj->x = x;
    obj->y = y;
    obj->w = w;
    obj->l = l;
    
    return obj;
}

