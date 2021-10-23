//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры, связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "ball.h"
#include "parallelepiped.h"
#include "tetrahedron.h"

//------------------------------------------------------------------------------
Random Shape::rnd20(1, 20);
Random Shape::rnd2(1, 2);

//------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из файла
Shape *Shape::StaticIn(ifstream &ifst) {
    int k;
    ifst >> k;
    Shape *sp = nullptr;
    switch (k) {
        case 1:
            sp = new Ball;
            break;
        case 2:
            sp = new Parallelepiped;
            break;
        case 3:
            sp = new Tetrahedron;
            break;
    }
    sp->In(ifst);
    return sp;
}

// Случайный ввод обобщенной фигуры
Shape *Shape::StaticInRnd() {
    auto k = Shape::rnd2.Get();
    Shape *sp = nullptr;
    switch (k) {
        case 1:
            sp = new Ball;
            break;
        case 2:
            sp = new Parallelepiped;
            break;
        case 3:
            sp = new Tetrahedron;
            break;
    }
    sp->InRnd();
    return sp;
}
