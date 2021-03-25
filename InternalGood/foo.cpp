// "static" with global variable means "do not export me and share with other cpp files"
static int x = 10;
// It is anonymous namespace and it affects everything inside it like "static" keyword
namespace {
	// We can still give name to a namespace inside it
	namespace foo { 
		int x = 10;
	};
};

// functions can also be "static"
static int f() {
	// This "static" have completely unrelated meaning and should be interpreted as "make y variable global but with visibility in a function scope"
	static int y = 0;
	return x + foo::x + y++;
}
