#include<iostream>
using namespace std;

template <class T>
class MyStack {
	int tos;//top of stack
	T data[100];//T 타입의 배열
public:
	MyStack();
	void push(T element);//T타입 원소 element를 data배열에 삽입
	T pop();//스택의 탑에 있는 데이터를 data 배열에서 리턴
};

template<class T>
MyStack<T>::MyStack() {
	tos = -1;
}

template<class T>
void MyStack<T>::push(T element) {//push함수 구현
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;//top of stack을 1씩 증가시키며 T타입 배열 data에 채운다. 
	data[tos] = element;
}

template<class T>
T MyStack<T>::pop(){
	T reData;
if (tos == -1) {
	cout << "stack empty";
	return 0;
}
reData = data[tos--];//data의 원소를 하나씩 줄여가며 pop을 수행
return  reData;
}
int main() {
	MyStack<int> iStack;//int만 저장할 수 있는 스택
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;//double만 저장할 수 있는 스택
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();//char만 저장할 수 있는 스택
	p->push('a');
	cout << p->pop() << endl;
	delete p;	
}