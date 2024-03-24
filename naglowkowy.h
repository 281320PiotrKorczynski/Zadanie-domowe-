#ifndef UNTITLED1_NAGLOWKOWY_H
#define UNTITLED1_NAGLOWKOWY_H

#include <iostream>
using namespace std;
class CounterModel {
private:
    int count;

public:
    CounterModel() : count(0) {}

    void incrementCount() {
        count++;
    }

    int getCount() const {
        return count;
    }
};

class CounterView {
public:
    void displayCount(int count) {
        cout << "Punkty: " << count << endl;
    }
};

class CounterController {
private:
    CounterModel model;
    CounterView view;

public:
    void handleClick() {
        model.incrementCount();
        view.displayCount(model.getCount());
    }
};

#endif
