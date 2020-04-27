#include <stdio.h>

class Shape {
public:
	void draw() {
		puts("���� ������Ʈ �Դϴ�.");
	}

};

class Line : public Shape {
	public:
		void draw() {
			puts("���� �߽��ϴ�");
		}
	};

class Circle : public Shape {
	public:
		void draw() { puts("���� �׸��ϴ�."); }
};

class Rect : public Shape {
public:
	void draw() { puts("�簢���� �׸��ϴ�."); }
};

int main() {
	Shape* ar[] = { new Shape(), new Rect(), new Circle(), new Rect(), new Line() };

	printf("ar size: %d, ar[0] size : %d\n", sizeof(ar), sizeof(ar[0]));

	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]) ; i++)
	{
		ar[i]->draw();
	}
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		delete ar[i];
	}
}