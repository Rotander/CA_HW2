//------------------------------------------------------------------------------
// main.cpp - содержит главную функцию, 
// обеспечивающую простое тестирование
//------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include "container.h"

void errMessage1() {
    cout << "incorrect command line!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    cout << "incorrect qualifier value!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n";
}

//------------------------------------------------------------------------------
int main(int argc, char *argv[]) {
    if (argc != 5) {
        errMessage1();
        return 1;
    }

    cout << "Start" << '\n';
    Container c{10000};

    if (!strcmp(argv[1], "-f")) {
        ifstream ifst(argv[2]);
        c.In(ifst);
    } else if (!strcmp(argv[1], "-n")) {
        bool is_digit = true;
        int digit;
        for (int i = 0; i < strlen(argv[2]); ++i) {
            if (!isdigit(argv[2][i])) {
                is_digit = false;
                break;
            }
        }
        if (is_digit) {
            auto size = atoi(argv[2]);
            if ((size < 1) || (size > 10000)) {
                cout << "incorrect number of figures = "
                     << size
                     << ". Set 0 < number <= 10000\n";
                return 3;
            }
            // системные часы в качестве инициализатора
            srand(static_cast<unsigned int>(time(0)));
            // Заполнение контейнера генератором случайных чисел
            c.InRnd(size);
        } else {
            errMessage1();
            return 1;
        }
    } else {
        errMessage2();
        return 2;
    }

    // Вывод содержимого контейнера в файл
    ofstream ofst1(argv[3]);
    ofst1 << "Filled container:\n";
    c.Out(ofst1);

    // Дополнительное задание
    ofstream ofst2(argv[4]);
    ofst2 << "Filtered container:\n";
    c.Volume(ofst2);

    cout << "Stop" << '\n';
    return 0;
}
