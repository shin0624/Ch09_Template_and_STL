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
	MyStack<int*> ipStack;//int*만 저장하는 스택
	int* p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10;//0, 10, 20으로 초기화
	ipStack.push(p);//포인터 푸시
	int* q = ipStack.pop();//포인터 팝. 배열을 가리키는 주소를 꺼내므로 0,10,20 순서
	for (int i = 0; i < 3; i++)cout << q[i] << " ";
	cout << endl;
	delete[]p;

	MyStack<Point> pointStack;//Point 타입의 객체만 저장하는 스택
	Point a(2, 3), b;
	pointStack.push(a);//포인트 객체 푸시. 복사되어 저장
	b = pointStack.pop();
	b.show();

	MyStack<Point*>pStack;//point*만 저장하는 스택.
	pStack.push(new Point(10, 20));//동적생성 point객체 푸시. 포인터만 저장
	Point* pPoint = pStack.pop();//point객체의 포인터 팝
	pPoint->show();

	MyStack<string>stringStack;//문자열만 저장하는 스택. 
	string s = "c++";
	stringStack.push(s);//스택에 c++ 푸시
	stringStack.push("java");//스택에 java 푸시. -->c++ java
	cout << stringStack.pop() << " ";//-->java
	cout << stringStack.pop() << endl;//-->c++
}
