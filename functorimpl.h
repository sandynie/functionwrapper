#ifndef _FUNCTORIMPL_H
#define _FUNCTORIMPL_H
#include "objhandler.h"
namespace FunctorWrapper{
	template<typename _R,typename _ParamList>
	class functor
	{
	public:
		typedef handler_base<_R,_ParamList> handler_type;
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
//在这里通过编译器反推函数类型，使函数对象和函数得到一样的处理
		template<typename _FuncType>
		functor(_FuncType func){
			if (Length<_ParamList>::value>20)
			{
               throw "参数不能超过20";
			}
			_handler= new handler<_R,_ParamList,_FuncType>(func);
		}
		~functor(){delete _handler;}
		template <typename _ObjType, typename _FuncType>
		functor( _ObjType *obj, _FuncType func )
		{
			if (Length<_ParamList>::value>20)
			{
				throw "参数不能超过20";
			}
			_handler= new mem_handler<_R, _ParamList, _FuncType, _ObjType>(obj, func ) ;
		}
		_R operator()(){ (*_handler)();}
		_R operator()(param1_type p)
		{return (*_handler)(p);}
		_R operator()(param1_type p1,param2_type p2)
		{return (*_handler)(p1,p2);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3)
		{return (*_handler)(p1,p2,p3);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4){return (*_handler)(p1,p2,p3,p4);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5)
		{return (*_handler)(p1,p2,p3,p4,p5);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6)
		{return (*_handler)(p1,p2,p3,p4,p5,p6);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12)
		{return _handler(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17)
		{return _handler(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19);}
		_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19,param20_type p20)
		{return (*_handler)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20);}
		functor(const functor& rvalue){
	    _handler=rvalue._handler->clone();
		}
		bool operator==(const functor& rvalue)
		{
			return _handler->is_equal(rvalue._handler);
		}
		bool operator!=(const functor& rvalue)
		{
			return !_handler->is_equal(rvalue._handler);
		}
		functor& operator=(const functor& ravlue)
		{
	        if (this!=&ravlue)
	        {
				delete _handler;
				_handler=ravlue._handler->clone();
				return *this;
	        }
		}
	protected:
	private:
     handler_base<_R,_ParamList> *_handler;
	 //这里不能用handler，因为还有推断出函数类型，所以只能用基类，基类有虚函数...Right？
	};
}
#endif