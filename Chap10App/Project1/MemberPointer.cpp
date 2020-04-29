#include<stdio.h>

class Myclass
{
public:
	int i, j;
	double d;
};

int main()
{
	Myclass C;
	int Myclass::* pi;
	double Myclass::* pd;
	int num;

	pi = &Myclass::i;
	C.*pi = 10;
	pi = &Myclass::j;
	C.*pi = 300;
	pd = &Myclass::d;
	C.*pd = 3.14;
	//pd=&MyClass::i; pd는 Myclass의 실수만 가리킬수있다.
	printf("%d,  %d,  %f\n", C.i, C.j, C.d);
}