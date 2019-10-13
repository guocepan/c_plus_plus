#ifndef _SMILE_
#define _SMILE_

#include<iostream>
using namespace std;

class dog; //declare
 
class dog
{
public:
	dog(int l = 4,int e =2):leg(l),eye(e)
	{
	}
	int sLeg()
	{
		return leg;
	}
	int sEye()
	{
		return eye;
	}


private:
  	int leg;
	int eye;


};//这个分号，手写的时候没有添加上去。







#endif //_SMILE_
