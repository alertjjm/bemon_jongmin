// 30.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book {
public:
	int year;
	string bname;
	string author;
};

int main()
{
	vector<Book> v;
	Book temp;
	int t;
	int i = 0;
	string search;
	while (1) {
		cout << "�԰��� å�� �Է��Ͻÿ�. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
		cout << "�⵵ >>";
		cin >> t;
		if (t == -1)
			break;
		temp.year = t;
		cout << "å�̸� >>";
		cin >> temp.bname;
		cout << "���� >>";
		cin >> temp.author;
		v.push_back(temp);
	}
	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
	cout << "�˻��ϰ����ϴ� ������ �̸��� �Է��Ͻÿ�>> ";
	cin >> search;
	for (i = 0; i < v.size(); i++)
		if (v[i].author == search) {
			cout << v[i].year << ", " << v[i].bname << ", " << v[i].author << endl;
			break;
		}
    return 0;
}

