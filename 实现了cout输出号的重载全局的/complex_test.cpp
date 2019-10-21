#include"compelx.h"

int main()
{
	Complex c(2, 3);
	Complex d(2, 3);
	c+= c += d;
	cout << c.real() << ", "<< c.imag()<<endl;
	c << cout  ; //实现了将《 变成成员函数后的调用方法
	cout << c<< d; // 用全局的方法实现了《 这个方法。
	system("pause");
	return 0;
}