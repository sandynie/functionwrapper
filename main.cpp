#include "functor.h"
#include "testobj.h"
#include "Commander.h"
#include "Soldier.h"
#include <iostream>
using std::cout;
using std::endl;
using namespace FunctorWrapper;
int func1(int a,int b){return a+b;}
int main()
{
    functor<int ,TYPELIST_2(int,int)>  cmd(func1);
	cout<<func1(5,6)<<endl;
	TObject obj(5,"haha");
	obj.toString();
	//这里一直通不过的原因是 _handler是指针  (*handler)()方式调用
	functor<void,TYPELIST_1( int)>cmd2(&obj,&TObject::setAge);
	string newname="sandy";
	cmd2(6);
	obj.toString();
	/*Commander commander;
	Soldier * s1,*s2,*s3;
	s1=new Soldier(111,&commander);
	s2=new Soldier(222,&commander);
	s3=new Soldier(333,&commander);
	commander.ChangeTarget(100,100);
	delete s1;
	commander.ChangeTarget(200,400);
	delete s2;
	delete s3;*/
	system("pause");
	return 0;
}