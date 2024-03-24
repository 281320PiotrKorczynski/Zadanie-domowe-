#include <iostream>
#include "naglowkowy.h"
using namespace std;
int main() {
    CounterController controller;

    char input;
    while (true) {
        controller.handleClick();
        cout << "Nacisnij e (zeby wyjsc), albo dowolny znak i enter zeby zdobyc punkt: ";
        cin >> input;
        if (input == 'e') {
            break;
        }
    }

    return 0;
}
