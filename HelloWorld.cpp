#include <iostream>

std::string allowPause;

int main() {
	
	std::cout << "Hello World\n";

	//I'm using this to allow the program time to display
	//"Hello World" without closing, and it's the only
	//way I know to do it right now.
	std::cin >> allowPause;

	return 0;
}
