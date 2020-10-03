#pragma once
#include <iostream>
using namespace std;

class Counter {

    int min, max, data;

public:
    Counter(const int newMin, const int newMax);

    void setMin(int newMin) {
        if (newMin > max) cout << "Error";
        else {
            min = newMin;
            data = min;
        }
    }

    void setMax(int newMax) {
        if (newMax < min) cout << "Error";
        else{
            max = newMax;
            data = min;
        }
    }

    void plusOne();

    const int getData() {
        return data;
    }
};