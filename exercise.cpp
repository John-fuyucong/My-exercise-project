#include<iostream>
using namespace std;
#include<string>

//����ģ��
template<typename T>   //����ģ�� ���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
//�������ͽ�������

void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


int main()
{

	int a = 10;
	int b = 20;
	//���ú���ģ��������ݽ���
	//1.�Զ������Ƶ�
	//mySwap(a, b);
	//2.��ʾָ������
	mySwap<int>(a, b);

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;


	system("pause");

	return 0;
}