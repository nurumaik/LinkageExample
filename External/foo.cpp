#include "foo.h"

// This is an "implementation" of a variable
int x = 10;
int foo::y = 10;
const std::string s("foo");

int f() {
	return x++ + foo::y++;
}
