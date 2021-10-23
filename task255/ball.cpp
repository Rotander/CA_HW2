//------------------------------------------------------------------------------
// ball.cpp - содержит методы прямоугольника
//------------------------------------------------------------------------------
#define M_PI 3.14159265358979323846

#include "ball.h"

//------------------------------------------------------------------------------
// Ввод параметров шара из файла
void Ball::In(ifstream &ifst) {
    ifst >> density >> r;
}

// Случайный ввод параметров шара
void Ball::InRnd() {
    density = Shape::rnd20.Get();
    r = Shape::rnd20.Get();
}

//------------------------------------------------------------------------------
// Вывод параметров шара в форматируемый поток
void Ball::Out(ofstream &ofst) {
    ofst << "It is Ball: r = " << r << ". Volume = " << Volume() << "\n";
}

//------------------------------------------------------------------------------
// Вычисление объема шара
double Ball::Volume() {
    return double(4.0 / 3 * M_PI * r * r);
}