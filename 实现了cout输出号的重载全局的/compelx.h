#pragma once
#ifndef  _COMPLEX_
#define _COMPLEX_
#include<iostream>
using namespace std;

class Complex;
class Complex
{
public:
	Complex(int r = 0,int i = 0):re(r),im(i){}
	int real() const { return re; }
	int imag()  const{ return im; }
	Complex & operator += (const Complex & );
	Complex & operator <<( Complex & r);
	ostream & operator <<(ostream &os);
private:
	int re, im;
};
//Complex & _doapl(Complex * thr, const Complex &r)
//{
//	thr->real() += r.imag();
//	return *thr; 
//
//}
Complex & Complex::operator +=( const Complex &x)
{
	this->re += x.real();//x 是一个实例，可以调用他的成员函数。
	this->im += x.imag();

	return *this;



}

//Complex & Complex ::operator += (const Complex & x)
//{
//
//	return _doapl(this,x);
//
//}

//Complex & Complex:: operator <<( Complex & r) //这里从头到尾都没有看见有关cout这个数参加。
//{
//	cout << r.real() << "  " << r.imag();
//	//在调用这个时出现的错误提示 cout << c;
//	//	错误二进制“ << ”: 没有找到接受“Complex”类型的右操作数的运算符(或没有可接受的转换)
//
//	return r;
//
//}
ostream & Complex::operator <<(ostream &os)
{
	//明确表示了os这个参数来自ostream这个空间
	cout << "<" << this->re << "," << this->im << ">";
	return os;

}

//对 << 重载，需要写成全局函数。

//类型为啥要写成ostream & 因为为了满足cout<<s<<d;这些骚操作。而且传引用速度快。
//方法一：
//ostream& operator << (ostream &os, const Complex & r)
//{
//	cout << "(" << r.real() << "," << r.imag() << ")" << endl;
//
//	return os;
//}
//方法二

ostream & operator <<(ostream &os, const Complex &rl)
{
	os << "<" << rl.real() << "," << rl.imag() << ">";
	return os;


}




#endif //_COMPLEX_