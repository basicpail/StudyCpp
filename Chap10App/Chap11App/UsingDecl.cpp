#include<stdio.h>

namespace UTIL {
	int value;
	double score;
	void sub() { puts("Sub Routine"); }
}

int main() {
	using UTIL::value;

	value = 3;
	UTIL::score = 1.234;
	UTIL::sub();

	return 0;
}

void mysub() {
	UTIL::value = 5;
}