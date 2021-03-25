// If you compile with this file, you'll get linker errors, because these variables and functions already defined in foo.cpp
int x = 10;
namespace foo {
	int x = 10;
};

int f() {
	return x + foo::x;
}
