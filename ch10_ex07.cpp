#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template<class T>
MyStack <T>::MyStack() {
	tos = -1;
}
template<class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template<class T>
T MyStack<T> ::pop() {
	T reData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	reData = data[tos--];
	return reData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << "(" << x << "," << y << ")" << endl; }
};

int main() {
	MyStack<int*> ipStack;//int*�� �����ϴ� ����
	int* p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10;//0, 10, 20���� �ʱ�ȭ
	ipStack.push(p);//������ Ǫ��
	int* q = ipStack.pop();//������ ��. �迭�� ����Ű�� �ּҸ� �����Ƿ� 0,10,20 ����
	for (int i = 0; i < 3; i++)cout << q[i] << " ";
	cout << endl;
	delete[]p;

	MyStack<Point> pointStack;//Point Ÿ���� ��ü�� �����ϴ� ����
	Point a(2, 3), b;
	pointStack.push(a);//����Ʈ ��ü Ǫ��. ����Ǿ� ����
	b = pointStack.pop();
	b.show();

	MyStack<Point*>pStack;//point*�� �����ϴ� ����.
	pStack.push(new Point(10, 20));//�������� point��ü Ǫ��. �����͸� ����
	Point* pPoint = pStack.pop();//point��ü�� ������ ��
	pPoint->show();

	MyStack<string>stringStack;//���ڿ��� �����ϴ� ����. 
	string s = "c++";
	stringStack.push(s);//���ÿ� c++ Ǫ��
	stringStack.push("java");//���ÿ� java Ǫ��. -->c++ java
	cout << stringStack.pop() << " ";//-->java
	cout << stringStack.pop() << endl;//-->c++
}
