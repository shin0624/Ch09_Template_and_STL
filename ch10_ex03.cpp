#include<iostream>
using namespace std;

//배열의 합을 구하여 리턴하는 제네릭add() 메서드

template<class T>
T add(T data[], int n) {// T 타입의 배열 data에서 n개의 원소를 합한 결과 리턴
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum;//sum변수의 타입과 리턴타입이 모두 T로 선언됨
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 };

	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;
}