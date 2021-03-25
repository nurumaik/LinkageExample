// Now no linker conflicts because this variables have internal linkage
static int x = 10;
namespace {
	namespace foo {
		int x = 10;
	};
};

static int f() {
	return x + foo::x;
}
