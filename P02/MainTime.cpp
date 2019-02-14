#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	Time t(23, 59, 58);
	Time t1(23, 59, 59);
	t.decreaseTime(t1);
	t.printTime();
	return 0;
}
