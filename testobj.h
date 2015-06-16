#ifndef _TEST_OBJ_H
#define _TEST_OBJ_H
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
class TObject
{
public:
	TObject(int iage,const string& iname):age(iage),name(iname){}
	int getAge()const{return age;}
	string getName()const{return name;}
	void  setAge(int iage){age=iage;}
	void setName(const string&  iname){name=iname;}
	void toString(){cout<<"name\t"<<name<<"\tage\t"<<age<<endl;}
protected:
private:
	int age;
	string name;
};
#endif