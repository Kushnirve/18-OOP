#include "Counter.h"

Counter::Counter(const int newMin, const int newMax) {
	min = newMin;
	max = newMax;
	data = min;
}

void Counter::plusOne() {	
	data++;
	if (data > max) data = min;
	
}