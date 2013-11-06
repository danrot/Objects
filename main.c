#include "Square.h"

int main(int argc, char** argv) {
    SquareObject* square = sqo_construct(1,2,3,4);
    
    square->pClass->draw(square);
    
    square->pClass->super->draw(square);
}

