#ifndef UNTITLED1_GAMECONTROLLER_H
#define UNTITLED1_GAMECONTROLLER_H

#include <iostream>
#include "GameView.h"
#include "GameModel.h"

class GameController {
private:
    GameModel model;
    GameView view;

public:
    void run() {
        model.wczytaj();
        while (true) {
            if (letterCheck() == 0)
                break;
            display();
        }
    }

private:
    int letterCheck() {
        char input = view.Input();
        if (input == 'b') {
            model.incrementCount();
        } else if (input == 'e') {
            model.zapisz_do_txt();
            return 0;
        } else {

        }
        return 1;
    }

    void display() {
        view.displayCount(model.showCount(), model.levelingMechanic());
    }
};

#endif //UNTITLED1_GAMECONTROLLER_H
