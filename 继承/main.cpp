#include<iostream>
using namespace std;

//普通实现页面

//Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，C艹，python...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学习视频" << endl;
//
//	}
//};
//
////python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，C艹，python...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学习视频" << endl;
//
//	}
//};
//

//继承实现页面
class BasePage
{
public:
	void header()
	{
		cout << "首页，登录，注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助，交流合作，站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java，C艹，python...（公共分类列表）" << endl;
	}

};
//java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java学习视频" << endl;
	}

};
//python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "python学习视频" << endl;
	}

};
void test01()
{
	Java ja;
	cout << "Java学习页面" << endl;
	ja.content();
	ja.footer();
	ja.header();
	ja.left();
	cout << "---------------------" << endl;
	Python py;
	cout << "Python学习页面" << endl;
	py.content();
	py.footer();
	py.header();
	py.left();
}


//继承的好处：减少重复代码
//语法： class 子类（名） : 继承方式（public等） 父类
//子类 也成为 派生类
//父类 也成为 基类

int main()
{
	test01();
	return 1;
}