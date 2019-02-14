#include <iostream>
#include "Paper.hpp"

using namespace std;

int main() {
	Paper a('A');
	Paper b('B');
	Paper x('C');
	Paper c(x);
	a.fold();
	b.fold();
	x.fold();
	x.glue();
	x.setName('X');
	c.fold();
	c.glue();
	return 0;
}
