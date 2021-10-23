#ifndef __ball__
#define __ball__

//------------------------------------------------------------------------------
// ball.h - содержит описание шара и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>

using namespace std;

# include "rnd.h"
#include "shape.h"

// шар
class Ball : public Shape {
public:
    ~Ball() override = default;

    // Ввод параметров шара из файла
    void In(ifstream &ifst) override;

    // Случайный ввод параметров шара
    void InRnd() override;

    // Вывод параметров шара в форматируемый поток
    void Out(ofstream &ofst) override;

    // Вычисление объёма шара
    double Volume() override;

private:
    int r; // радиус
};

#endif //__ball__
