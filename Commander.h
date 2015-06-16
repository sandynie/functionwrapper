#ifndef _COMANDER_H
#define _COMANDER_H
#include "events.h"
#include "typelist.h"
class Commander
{
public:
   typedef Event<TYPELIST_2(int,int)> EVNET_TYPE;
	EVNET_TYPE TargetEvents;
	void ChangeTarget(int x,int y)
	{
		TargetEvents(x,y);
	}
protected:
private:
};
#endif