#include <stdio.h>

template <typename T>
void swap(T& a, T& b)
{
	T t;
	t = a; a = b; b = t;
}
//함수는 하나밖에 없는데 여러가지 형태의 데이터를 스왑 할 수 있다.

template <typename T>
T add(T& a, T& b)
{
	return a + b;
}
//void swap(double& a, double& b)
//{
//	double t;
//	t = a; a = b; b = t;
//}

int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	swap(a, b);
	swap(c, d);
	swap(e, f);
	printf("a = %d,b = %d\n", a, b);
	printf("c = %f,d = %f\n", c, d);
	printf("e = %c,f = %c\n", e, f);

	printf("a+b = %d\n", add(a,b));
	printf("c+d = %f\n", add(c, d));
	printf("e+f = %c\n", add(e, f));
}