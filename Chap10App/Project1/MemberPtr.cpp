#include<stdio.h>

class Calc {
public:
	void Op1(int a, int b) {printf("%d\n", a + b);}
	void Op2(int a, int b) { printf("%d\n", a - b); }
	void Op3(int a, int b) { printf("%d\n", a * b); }
	void Op4(int a, int b) { printf("%d\n", a / b); }
};

int main() {
	int ch;
	Calc c;
	int a = 10, b = 5;

	void (Calc:: * aOp[4])(int, int) =
	{ &Calc::Op1 ,&Calc::Op2,&Calc::Op3,&Calc::Op4 };

	while (1) {

		printf("연산을 선택하세요, 1=더하기, 2=빼기, 3=곱하기, 4=나누기, 0=종료: ");
		scanf("%d", &ch);

		if (ch >= 1 && ch <= 4) (c.*aOp[ch - 1])(a, b);
		else if (ch == 0) return 0;
		

		/*switch (ch)
		{
		case 1:
			(c.*aOp[0])(a, b);
			break;
		case 2:
			(c.*aOp[1])(a, b);
			break;
		case 3:
			(c.*aOp[2])(a, b);
			break;
		case 4:
			(c.*aOp[3])(a, b);
			break;
		case 0:
			return 0;
			break;
		}*/
	}
}