#include "./bin.h"

Bin::Bin(int x, string str) {
    type = str;
    number = x;
}

void Bin::to_bin() {
    int power = 0;
    int numberc = number; // number copy.
    while (numberc / 2 != 0) {
        // finding highest two power in number.
        numberc /= 2;
        power += 1;
    }

    int binNumber = 0;
    while (number > 0) {
        if (number - pow(2, power) >= 0) {
            binNumber += 1 * pow(10, power);
            number -= pow(2, power);
            power--;
        } else {
            power--;
        }
    }

    number = binNumber;
    type = "bin";
}

void Bin::to_int() {
    int power = 0;
    int numberc = number; // number copy.
    int output = 0;
    while (numberc > 0) {
        if (numberc % 2 == 1) {
            output += pow(2, power);
            numberc -= 1;
            numberc /= 10;
        } else {
            numberc /= 10;
        }
        power++;
    }

    number = output;
    type = "int";
}

void Bin::to_one_complement() {
    string numberstr = to_string(number); // number string.
    for (int i = 0; i < numberstr.size(); i++) {
        if (numberstr[i] == '1') {
            numberstr[i] = '0';
        } else {
            numberstr[i] = '1';
        }
    }

    number = stoi(numberstr);
    type = "bin";
}

int Bin::get_value() {
    return number;
}

string Bin::get_type() {
    return type;
}