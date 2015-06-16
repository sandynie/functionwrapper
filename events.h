#ifndef _EVENTS_H
#define _EVENTS_H
#include <list>
#include <algorithm>
#include "functor.h"
using std::list;
using std::find;
using namespace FunctorWrapper;
template<typename _ParamList>
class Event
{
public:
	typedef functor<void,_ParamList> Handler;
	typedef handler_base<void,_ParamList> handler_type;
	typedef typename handler_type::param1_type  param1_type;
	typedef typename handler_type::param2_type  param2_type;
	typedef typename handler_type::param3_type  param3_type;
	typedef typename handler_type::param4_type  param4_type;
	typedef typename handler_type::param5_type  param5_type;
	typedef typename handler_type::param6_type  param6_type;
	typedef typename handler_type::param7_type  param7_type;
	typedef typename handler_type::param8_type  param8_type;
	typedef typename handler_type::param9_type  param9_type;
	typedef typename handler_type::param10_type  param10_type;
	typedef typename handler_type::param11_type  param11_type;
	typedef typename handler_type::param12_type  param12_type;
	typedef typename handler_type::param13_type  param13_type;
	typedef typename handler_type::param14_type  param14_type;
	typedef typename handler_type::param15_type  param15_type;
	typedef typename handler_type::param16_type  param16_type;
	typedef typename handler_type::param17_type  param17_type;
	typedef typename handler_type::param18_type  param18_type;
	typedef typename handler_type::param19_type  param19_type;
	typedef typename handler_type::param20_type  param20_type;
	void SetEnable(bool enable){_enabled=enable;}
	bool GetEnable()const{return _enabled;}
	void SetCalling(bool calling){_calling=calling;}
	bool GetCalling()const{return _calling;}
	void SetRecursive(bool recursive){_recursive=recursive;}
	bool GetRecursive()const{return _recursive;}

	void AddEvent(const Handler& aevent){_eventlist.push_back(aevent);}
	void RemovEvent(const Handler&revent){_eventlist.remove(revent);}
	void ClearEvents(){_eventlist.clear();}
	size_t Size()const{return _eventlist.size();}
	bool Contains(const Handler& fevent){
	eiter it=find(_eventlist.begin(),_eventlist.end(),fevent);
	return (it!=_eventlist.end());
	}
   //迭代器不能使用 《  》  一定要用==
	void  operator()(){
		if (doCommonCheck())
		{
          for (eiter it=_eventlist.begin(),iend!=_eventlist.end();it<iend;it++)
				(*it)();
		}
		_calling=true;
	}
	
	void operator()(param1_type p1){
		if (doCommonCheck())
		{
		for (eiter it=_eventlist.begin(),iend!=_eventlist.end();it<iend;it++)
				(*it)(p1);
		}
		_calling=true;
	}

	void operator()(param1_type p1,param2_type p2)
	{	
		if (doCommonCheck())
	{
		for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
			(*it)(p1,p2);
	}
	_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3)
	{	
		if (doCommonCheck())
		{
		for (eiter it=_eventlist.begin(),iend!=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5)
	{	
		if (doCommonCheck())
		{
		for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6)
	{	
		if (doCommonCheck())
		{
		for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
					(*it)(p1,p2,p3,p4,p5,p6);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
					(*it)(p1,p2,p3,p4,p5,p6,p7);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10)
	{	
		if (doCommonCheck())
		{
		for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19);
		}
		_calling=true;
	}
	void operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19,param20_type p20)
	{	
		if (doCommonCheck())
		{
			for (eiter it=_eventlist.begin(),iend=_eventlist.end();it!=iend;it++)
				(*it)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20);
		}
		_calling=true;
	}
protected:
private:
	typedef list< Handler > EventHandlerList;
	typedef typename  list<Handler>::iterator  eiter;
	EventHandlerList _eventlist;
	bool _enabled;//是否执行events
	bool _calling;//events是否已执行
	bool _recursive;
	bool doCommonCheck(){
		bool ret=false;
	   if (!_enabled)
	   {
		   return ret;
	   }
	   if (_eventlist.size()==0)
	   {
		   return ret;
	   }
	   if ((!_recursive)&& _calling)
	   {
		   return ret;
	   }
     ret=true;
	   return ret;
	}
};


#endif