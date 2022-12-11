// Using old-style includes is still possible.
#include <iostream>

// Let's import our example module.
import foobar;
import jim;

int main()
{
	std::cout << foobar::helloWorld() << "\n";
	std::cout << "un-exported type: " << getJim().name << "\n";
	std::cout << "transitive type:  " << getJohn().name << "\n";
}