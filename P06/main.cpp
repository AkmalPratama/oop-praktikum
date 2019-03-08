#include <iostream>
#include "memo.h"
#include "sekretaris.h"

using namespace std;

int main() {
	Sekretaris s(1, 99);
	s.printStatus();
	s.buatMemo("Hello", "Jon");
	s.printStatus();
	s.buatMemo("World", "Snow");
	s.buatMemo("World", "Snow");
	s.buatMemo("World", "Snow");
	s.printStatus();cout <<"oy";
	return 0;
}
