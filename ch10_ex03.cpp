#include<iostream>
using namespace std;

//�迭�� ���� ���Ͽ� �����ϴ� ���׸�add() �޼���

template<class T>
T add(T data[], int n) {// T Ÿ���� �迭 data���� n���� ���Ҹ� ���� ��� ����
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum;//sum������ Ÿ�԰� ����Ÿ���� ��� T�� �����
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 };

	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;
}