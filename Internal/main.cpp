#include <iostream>

// Notice there is no foo.h, but we can steal any variable declared in foo.cpp
extern int x;
int f();
namespace foo {
	extern int x;
};
int main() {
	std::cout << x;
	std::cout << foo::x;
	std::cout << f();
}
