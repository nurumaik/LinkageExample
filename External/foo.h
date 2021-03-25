#include <string>
// This is a "prototype" of a variable
extern int x;
namespace foo {
	extern int y;
};
// Constants is fine because they act like "inline" variables and their value doesn't belong to any translation unit
const int z = 10;
// This works only when it's plain variable without custom constructor
//const std::string s("foo");
// With complex types you still need to split it to "prototype" and "implementation"
extern const std::string s;
int f();
