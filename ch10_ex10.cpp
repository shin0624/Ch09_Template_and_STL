#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<string>sv;//���ڿ� ���� ����
	string name;//�������� ���� �ڿ� ������ �̸��� �����ϱ� ���� ����

	cout << "�̸��� 5�� �Է��϶�" << endl;
	for (int i = 0; i < 5; i++) {//�� �ٿ� �Ѱ��� 5���� �̸��� �Է¹޴´�
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);//�̸��� ���Ϳ� ����
	}
	name = sv.at(0);//������ ù ��° �̸�
	for (int i = 0; i < sv.size(); i++) {
		if (name < sv[i])//sv[i]�� ���ڿ��� name���� �������� �ڿ� ����
			name = sv[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
}