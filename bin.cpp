#include "./bin.h"

Bin::Bin(int x, string str) {
  type = str;
  number = x;
}

void Bin::to_bin() {
  int power = 0;
  int numberc = number;  // number copy.
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
  int numberc = number;  // number copy.
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
  string numberstr = to_string(number);  // number string.
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

void Bin::to_two_complement() {
  string numberstr = to_string(number);
  int i = numberstr.size() - 1;
  while (int(numberstr[i]) - 48 + 1 > 1) {
    i--;
  }
  numberstr[i] = '1';
  number = stoi(numberstr);
  type = "bin";
}

int Bin::get_value() { return number; }

string Bin::get_type() { return type; }

void Bin::set_value(int x) { number = x; }

/*Bin Bin::operator+ (Bin & num2) {
    if (this->get_type() == num2.get_type()) {
        if (this->get_type() == "bin") {
            string num1str = to_string(this->get_value());
            int i1 = num1str.size() - 1; // number 1 last index
            string num2str = to_string(num2.get_value());
            int i2 = num2str.size() - 1; // number 2 last index
            int res = 0; // reserve


        } else {
            this->set_value(this->get_value() + num2.get_value());
        }
    }
}*/
