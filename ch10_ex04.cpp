#include<iostream>
using namespace std;

//2개 이상의 제너럴 타입을 가진 경우
//배열을 복사하는 제네릭 mcopy()메서드

template<class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {//src[]의 n개의 원소를 dest[]에 복사. src와 dest는 T1, T2타입으로 서로 다름
	for (int i = 0; i < n; i++) {
		dest[i] = (T2)src[i];//T2로 형변환된 src의 원소를 같은 T2타입의 dest 에 복사.
	}
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','E', 'L', 'L', 'O' };
	char e[5];

	mcopy(x, d, 5);//x의 원소 5개를 double d에 복사
	mcopy(c, e, 5);//c의 원소 5개를 e에 복사. 
	 
	for (int i = 0; i < 5; i++) cout << d[i] << " ";
	cout << endl;
	for (int i = 0; i < 5; i++) cout << e[i] << " ";
	cout << endl;
}