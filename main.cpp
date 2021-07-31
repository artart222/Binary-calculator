#include <iostream>
#include <string>
#include "./bin.h"

using namespace std;

int main() {
    Bin test(73, "int");
    test.to_bin();
    cout << test.get_value() << endl;
    cout << test.get_type() << endl;
    test.to_int();
    cout << test.get_value() << endl;
    cout << test.get_type() << endl;
    test.to_bin();
    cout << test.get_value() << endl;
    cout << test.get_type() << endl;


    cout << "\n\n\n\n" << endl;

    Bin test2(3, "int");
    test2.to_bin();
    cout << test2.get_value() << endl;
    cout << test2.get_type() << endl;
    test2.to_int();
    cout << test2.get_value() << endl;
    cout << test2.get_type() << endl;
    test2.to_bin();
    cout << test2.get_value() << endl;
    cout << test2.get_type() << endl;


    test.to_one_complement();
    cout << test.get_value() << endl;
}