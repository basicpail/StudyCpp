#include <stdio.h>

class MathCalc {
private:
	const double pie;
public:
	//MathCalc(double apie) {
	//	//pie = apie; const ������ ������ �ȵȴ�.
	//}
	MathCalc(double apie) :pie(apie) { ; } //const �� �ʱ�ȭ ���
	void Docalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.8f\n", r, 2 * pie * r);
	}
};

int main() {
	MathCalc m(3.141592);
	m.Docalc(5.2);
}