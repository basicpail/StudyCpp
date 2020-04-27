#include<stdio.h>

class MathCalc
{
private:
	static const double pie;

public:
	MathCalc() { ; }
	void DoCalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, 2 * pie * r);
	}
};

const double MathCalc::pie = 3.141592;