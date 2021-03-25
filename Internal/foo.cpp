int x = 10;
namespace foo {
	int x = 10;
};

int f() {
	return x + foo::x;
}
