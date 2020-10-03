#include "Counter.h"
#include <iostream>
using namespace std;

int main() {
    Counter counter(4,8);
    counter.plusOne();
    cout << counter.getData() << endl;
    counter.setMin(6);
    counter.plusOne();
    cout << counter.getData() << endl;
    counter.setMax(9);
    cout << counter.getData() << endl;
    counter.plusOne();
    counter.plusOne();
    counter.plusOne();
    cout << counter.getData() << endl;
    counter.plusOne();
    cout << counter.getData() << endl;
}