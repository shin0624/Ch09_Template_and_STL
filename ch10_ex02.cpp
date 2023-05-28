#include<iostream>
using namespace std;

//하나의 제네틱 타입을 가진 경우
//큰 값을 리턴하는 bigger()메서드 

template <class T>
T bigger(T a, T b) {//두개의 매개변수 a, b를 비교하여 큰 값 리턴
	if (a > b) return a;
	else return  b;
}

int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20,50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger(a,z)의 결과는 " << bigger(c, d) << endl;
}
