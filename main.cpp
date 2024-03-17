#include <iostream>
using namespace std;
int main() {
    char lul;
    int x,y,result;
    do {
        cout << "Podaj dwie liczby calkowite x i y (lub 'e' aby wyjsc):";
        cin >> lul;

        if(lul == 'e') {
            cout << "Koniec programu." << endl;
            return 0;
        }
        x = lul - '0';
        cout << "Podaj y:";
        cin >> y;
        result=x*y;
        cout << "Wynik mnozenia:" << result << endl;
    } while (true);
}