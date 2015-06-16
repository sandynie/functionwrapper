#ifndef _SOLDIER_H
#define _SOLDIER_H
#include "Commander.h"
#include <iostream>
using std::cout;
using std::endl;
class Soldier
{
public:
	 
	Soldier(int id,Commander* comm):_id(id),_commander(comm)
	{
		_commander->TargetEvents.AddEvent( Event<TYPELIST_2(int,int)>::Handler(this,&Soldier::GetEvent));
	}
	~Soldier()
	{
       cout<<"Soldier No "<<_id<<"Leave The Event"<<endl;
	   _commander->TargetEvents.RemovEvent( Event<TYPELIST_2(int,int)>::Handler(this,&Soldier::GetEvent));
	}
	void GetEvent(int x,int y)
	{
          cout<<"Soldier No "<<_id<<" Get The Event"<<x<<y<<endl;
	}
protected:
private:
	int _id;
	Commander* _commander;
};
#endif