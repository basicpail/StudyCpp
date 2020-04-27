#include <stdio.h>

class MathCalc {
private:
	const double pie;
public:
	//MathCalc(double apie) {
	//	//pie = apie; const 변수는 수정이 안된다.
	//}
	MathCalc(double apie) :pie(apie) { ; } //const 값 초기화 방법
	void Docalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.8f\n", r, 2 * pie * r);
	}
};

int main() {
	MathCalc m(3.141592);
	m.Docalc(5.2);
}