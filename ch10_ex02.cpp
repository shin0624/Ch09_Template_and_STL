#include<iostream>
using namespace std;

//�ϳ��� ����ƽ Ÿ���� ���� ���
//ū ���� �����ϴ� bigger()�޼��� 

template <class T>
T bigger(T a, T b) {//�ΰ��� �Ű����� a, b�� ���Ͽ� ū �� ����
	if (a > b) return a;
	else return  b;
}

int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20,50)�� ����� " << bigger(a, b) << endl;
	cout << "bigger(a,z)�� ����� " << bigger(c, d) << endl;
}
