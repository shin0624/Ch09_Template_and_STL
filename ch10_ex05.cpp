#include<iostream>
using namespace std;

//중복함수가 템플릿 함수보다 우선적으로 바인딩됨을 이용한 중복함수 작성
//char 배열 출력 시 문자가 아닌 숫자로 출력하기 위한 print()메서드

template<class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++) 
		cout << array[i] << "\t";
		cout << endl;
}

void print(char array[], int n) {//템플릿 함수와 동일한 이름의 함수 중복
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << "\t";//array[i]를 int 타입으로 변환하여 정수 출력
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5 };
	print(x, 5);//템플릿으로 구체화한 함수 호출
	print(d, 5);//템플릿으로 구체화한 함수 호출

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);//char배열을 숫자로 출력하는 중복 함수 호출
}