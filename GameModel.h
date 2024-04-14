#ifndef UNTITLED1_GAMEMODEL_H
#define UNTITLED1_GAMEMODEL_H
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

class GameModel {
private:
    int count;
    int level=1;
    bool wczytanoDane = false;

public:
    GameModel() : count(0) {}

    int incrementCount() {
        count++;
        return count;
    }

    int showCount(){
        return count;
    }

    string levelingMechanic() {
        string level_roman = "";
        if (count % 5 == 0) {
            level++;
        }
        int level2=level;
        int arabic[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romanNumeral[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < 13; i++) {
            while (level2 >= arabic[i]) {
                level_roman += romanNumeral[i];
                level2 -= arabic[i];
            }
        }

        return level_roman;
    }

    void zapisz_do_txt() {
        string plik = "dudu.txt";
        try {
            ofstream file(plik);
            if (file.is_open()) {
                file << count << endl;
                file << level << endl;
                file.close();
                cout << "Dane zostały zapisane do pliku " << plik << endl;
            } else {
                throw runtime_error("Nie można otworzyć pliku do zapisu.");
            }
        } catch (const exception &e) {
            cerr << "Wystąpił błąd podczas zapisu do pliku: " << e.what() << endl;
        }
    }

    void wczytaj() {


        string plik = "dudu.txt";
        try {
            ifstream file(plik);
            if (file.is_open()) {
                file >> count;
                file >> level;
                file.close();
                cout << "Dane zostały wczytane z pliku " << plik << endl;
                wczytanoDane = true;
            } else {
                throw runtime_error("Nie można otworzyć pliku do odczytu.");
            }
        } catch (const exception &e) {
            cerr << "Wystąpił błąd podczas wczytywania pliku: " << e.what() << endl;
        }
        if (wczytanoDane) {
            cout << "Dane zostały już wczytane. Nie można wczytywać ponownie." << endl;
            cout << "Poziomy:" <<  level << endl;
            cout << "Punkty:"<< count << endl;
            return;
        }
    }
};

#endif //UNTITLED1_GAMEMODEL_H
