#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ����¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "����������������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Cܳ��python...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧϰ��Ƶ" << endl;
//
//	}
//};
//
////pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ����¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "����������������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Cܳ��python...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧϰ��Ƶ" << endl;
//
//	}
//};
//

//�̳�ʵ��ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ����¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "����������������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Cܳ��python...�����������б�" << endl;
	}

};
//javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧϰ��Ƶ" << endl;
	}

};
//pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "pythonѧϰ��Ƶ" << endl;
	}

};
void test01()
{
	Java ja;
	cout << "Javaѧϰҳ��" << endl;
	ja.content();
	ja.footer();
	ja.header();
	ja.left();
	cout << "---------------------" << endl;
	Python py;
	cout << "Pythonѧϰҳ��" << endl;
	py.content();
	py.footer();
	py.header();
	py.left();
}


//�̳еĺô��������ظ�����
//�﷨�� class ���ࣨ���� : �̳з�ʽ��public�ȣ� ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����

int main()
{
	test01();
	return 1;
}