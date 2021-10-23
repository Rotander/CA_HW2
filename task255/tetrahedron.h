#ifndef __tetrahedron__
#define __tetrahedron__

//------------------------------------------------------------------------------
// tetrahedron.h - содержит описание тетраэдра
//------------------------------------------------------------------------------

#include <fstream>

using namespace std;

# include "rnd.h"
#include "shape.h"

//------------------------------------------------------------------------------
// тетраэдр
class Tetrahedron : public Shape {
public:
    ~Tetrahedron() override = default;

    // Ввод параметров тетраэдра из файла
    void In(ifstream &ifst) override;

    // Случайный ввод параметров тетраэдра
    void InRnd() override;

    // Вывод параметров тетраэдра в форматируемый поток
    void Out(ofstream &ofst) override;

    // Вычисление объёма тетраэдра
    double Volume() override;

private:
    int a; // стороны
};

#endif //__tetrahedron__
