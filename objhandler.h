#ifndef _OBJHANDLER_H
#define _OBJHANDLER_H
#include "handler.h"
namespace FunctorWrapper{
//适用于 在对象上调用
	template <typename _R, typename _ParamList, typename _FuncType, typename _ObjType>
	class mem_handler : public handler_base<_R, _ParamList>
	{
	public:
		typedef _FuncType func_type;
		typedef _ObjType obj_type;

		typedef handler_base<_R, _ParamList> base_type;
		typedef typename base_type::param1_type param1_type;
		typedef typename base_type::param2_type param2_type;
		typedef typename base_type::param3_type param3_type;
		typedef typename base_type::param4_type param4_type;
		typedef typename base_type::param5_type param5_type;
		typedef typename base_type::param6_type param6_type;
		typedef typename base_type::param7_type param7_type;
		typedef typename base_type::param8_type param8_type;
		typedef typename base_type::param9_type param9_type;
		typedef typename base_type::param10_type param10_type;
		typedef typename base_type::param11_type param11_type;
		typedef typename base_type::param12_type param12_type;
		typedef typename base_type::param13_type param13_type;
		typedef typename base_type::param14_type param14_type;
		typedef typename base_type::param15_type param15_type;
		typedef typename base_type::param16_type param16_type;
		typedef typename base_type::param17_type param17_type;
		typedef typename base_type::param18_type param18_type;
		typedef typename base_type::param19_type param19_type;
		//最多支持20个参数
		typedef typename base_type::param20_type param20_type;
	public:
		mem_handler( obj_type *obj, const func_type &func ) :
		  _obj( obj ), _func( func )
		  {
		  }
		  _R operator() ()
		  {
			  return (_obj->*_func)();
		  }

		  _R operator() ( param1_type p )
		  {
			  return (_obj->*_func)( p );
		  }

		  _R operator() ( param1_type p1, param2_type p2 )
		  {
			  return (_obj->*_func)( p1, p2 );
		  }
		  _R operator()(param1_type p1,param2_type p2,param3_type p3)
		  {return (_obj->*_func)(p1,p2,p3);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4){return (_obj->*_func)(p1,p2,p3,p4);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13)
		  {return (_obj.*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19);}
		  _R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19,param20_type p20)
		  {return (_obj->*_func)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20);}
        bool is_equal(base_type* r_value) 
		{ 
		   mem_handler* p=(mem_handler*)r_value;
		   if (p->_obj!=_obj)
			   return false;
		   if(p->_func!=_func)
			   return false;
		   return true;
		}
     base_type* clone()
	 {
		 base_type*p=new mem_handler(_obj,_func);
		 return p;
	 }
	private:
		obj_type *_obj;
		func_type _func;
	};
}
#endif