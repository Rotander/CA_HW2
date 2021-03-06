#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------

#include "shape.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
class Container {
public:
    explicit Container(int s);

    ~Container();

    // Ввод содержимого контейнера из указанного потока
    void In(ifstream &ifst);

    // Случайный ввод содержимого контейнера
    void InRnd(int size);

    // Вывод содержимого контейнера в указанный поток
    void Out(ofstream &ofst);

    // Вывод элементов, подходящих по условию в дополнительном задании, в контейнере
    void Volume(ofstream &ofst);

private:
    void Clear();    // Очистка контейнера от данных
    int len; // текущая длина
    Shape **storage;
    int size;
};

#endif
