#include "Square.h"
#include <stdlib.h>

int main(int argc, char** argv) {
    SquareObject* square = (SquareObject*) malloc(sizeof(SquareObject));
    sqo_construct(square, 1, 2, 3);
    
    square->pClass->draw(square);
    
    square->pClass->super->draw(square);
}

