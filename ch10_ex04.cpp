#include<iostream>
using namespace std;

//2�� �̻��� ���ʷ� Ÿ���� ���� ���
//�迭�� �����ϴ� ���׸� mcopy()�޼���

template<class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {//src[]�� n���� ���Ҹ� dest[]�� ����. src�� dest�� T1, T2Ÿ������ ���� �ٸ�
	for (int i = 0; i < n; i++) {
		dest[i] = (T2)src[i];//T2�� ����ȯ�� src�� ���Ҹ� ���� T2Ÿ���� dest �� ����.
	}
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','E', 'L', 'L', 'O' };
	char e[5];

	mcopy(x, d, 5);//x�� ���� 5���� double d�� ����
	mcopy(c, e, 5);//c�� ���� 5���� e�� ����. 
	 
	for (int i = 0; i < 5; i++) cout << d[i] << " ";
	cout << endl;
	for (int i = 0; i < 5; i++) cout << e[i] << " ";
	cout << endl;
}