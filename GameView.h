#include "GameModel.h"
#ifndef UNTITLED1_GAMEVIEW_H
#define UNTITLED1_GAMEVIEW_H
using namespace std;
class GameView{

private:


public:
    void displayCount(int count,string level) {
        cout << "Poziom:" << level << endl;
        cout << "Punkty: " << count << endl;
    }

    char Input() {
        char x;
        cin >> x;
        return x;
    }
};


#endif //UNTITLED1_GAMEVIEW_H
