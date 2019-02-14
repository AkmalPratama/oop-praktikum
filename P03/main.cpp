#include <iostream>
#include "Box.h"

using namespace std;

int main() {
	Box b0(2);
	b0.set(0, 50);
	b0.set(1, 30);
	b0.show();
	Box b1(b0);
	Box b2(2);
	b2 = b1;
	b0.set(0, 10);
	b0.show();
	b1.show();
	b2.show();
	Box b3(2);
	b3 = b0 + b2 + b1;
	b3.show();
	//Box b4();
	return 0;
}
