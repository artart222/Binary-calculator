#ifndef BIN_H
#define BIN_H

#include <cmath>
#include <string>
#include <iostream>

using namespace std;

class Bin {
    private:
        string type;
        int number;

    public:
        Bin(int x, string str);

        void to_bin();

        void to_int();

        int get_value();

        string get_type();

        void to_one_complement();

        void to_two_complement();

        void set_value(int x);

        // Bin operator+(Bin& num2);
};

#endif