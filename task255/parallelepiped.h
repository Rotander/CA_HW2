#ifndef __parallelepiped__
#define __parallelepiped__

//------------------------------------------------------------------------------
// parallelepiped.h - содержит описание параллелепипеда и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>

using namespace std;

# include "rnd.h"
#include "shape.h"

// параллелепипед
class Parallelepiped : public Shape {
public:
    ~Parallelepiped() override = default;

    // Ввод параметров параллелепипеда из файла
    void In(ifstream &ifst) override;

    // Случайный ввод параметров параллелепипеда
    void InRnd() override;

    // Вывод параметров параллелепипеда в форматируемый поток
    void Out(ofstream &ofst) override;

    // Вычисление объёма параллелепипеда
    double Volume() override;

private:
    int a, b, c; // стороны
};

#endif //__parallelepiped__
