// in   complex.h

#pragma once  //只是检查一次一个头文件有没有重复包含

#ifndef _COMPLEX_  //防卫式声明，防止重复包含同一个头文件
#define _COMPLEX_

#include <iostream>
using namespace std;

template <typename T>
class Complex
{
public:
	Complex(T r = 0, T i = 0) :re(r), im(i) //并且进行了初始化
	{
		//构造函数
	}
	//不能这样定义一个重载函数wrong 1.1
	/*Complex() :re(0), im(0)
	{
	}
	*/

	T showReal() const { return re; } //在定义的时候就想好了能不能更改
	
	T showImag() { return im; }   //***这个方法没有使用const


private:
	T re, im;
};

#endif  //COMPLEX

//在complex_test.cpp中
#include "complex.h"

int main()
{
	Complex<double> a(2,2);
	// Complex(double) a();  wrong:1.1这个是不能通过的。
	cout << a.showImag() << endl;
	cout << a.showReal() << endl;


	//验证有无const的代码
	const Complex <int> b(3, 3);  //这个明显使用了const修饰，缩小了范围，不能调用没有const修饰的方法。

	
	
	//cout << b.showImag() << endl; 这个方法前面是没有添加const关键字的。这个方法范围比const修饰的大
	cout << b.showReal() << endl;

	system("pause");
	return 0;
}



