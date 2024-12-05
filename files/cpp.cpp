#include <iostream>
#include "ppc.h"
int main() {
	int number;
	std::cin >> number;
	switch (number) {
		case 1:
			helloworld();
			break;
		case 2:
			byeworld();
			break;
	}
}
