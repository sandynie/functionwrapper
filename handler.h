#ifndef _HANDLER_H
#define _HANDLER_H
#include "typelist.h"
namespace FunctorWrapper{
	template<typename _R>
	struct handler_type_base{
	typedef _R result_type;
	typedef   NullType param1_type;
	typedef  NullType param2_type;
	typedef  NullType param3_type;
	typedef  NullType param4_type;
	typedef  NullType param5_type;
	typedef  NullType param6_type;
	typedef  NullType param7_type;
	typedef  NullType param8_type;
	typedef  NullType param9_type;
	typedef  NullType param10_type;
	typedef  NullType param11_type;
	typedef  NullType param12_type;
	typedef  NullType param13_type;
	typedef  NullType param14_type;
	typedef  NullType param15_type;
	typedef  NullType param16_type;
	typedef  NullType param17_type;
	typedef  NullType param18_type;
	typedef  NullType param19_type;
	typedef  NullType param20_type;
	};

	//最上层的模板类,，所有的特例都是它的偏特化
    template<typename _R,typename _ParamList>
	struct handler_base;

	template<typename _R>
	struct handler_base<_R,void>: public handler_type_base<_R> 
   {
	   virtual _R operator()(void)=0;//虚函数实现多态
	   virtual bool is_equal(handler_base*) = 0; 
	   virtual handler_base* clone() = 0; 
   };

	template<typename _R,typename _P1>
	struct handler_base<_R,TYPELIST_1(_P1)>: public handler_type_base<_R>{
     typedef _P1 param1_type;
	 virtual _R operator()(_P1)=0;
	 virtual bool is_equal(handler_base*) = 0; 
	 virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2>
	struct handler_base<_R,TYPELIST_2(_P1,_P2)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		virtual _R operator()(_P1,_P2)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};
  
	template<typename _R,typename _P1,typename _P2,typename _P3>
	struct handler_base<_R,TYPELIST_3(_P1,_P2,_P3)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		virtual _R operator()(_P1,_P2,_P3)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,
		typename _P3,typename _P4>
	struct handler_base<_R,TYPELIST_4(_P1,_P2,_P3,_P4)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		virtual _R operator()(_P1,_P2,_P3,_P4)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,
		typename _P3,typename _P4,typename _P5>
	struct handler_base<_R,TYPELIST_5(_P1,_P2,_P3,_P4,_P5)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,typename _P3,
		typename _P4,typename _P5,typename _P6>
	struct handler_base<_R,TYPELIST_6(_P1,_P2,_P3,_P4,_P5,_P6)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4
		,typename _P5,typename _P6,typename _P7>
	struct handler_base<_R,TYPELIST_7(_P1,_P2,_P3,_P4,_P5,_P6,_P7)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4
		,typename _P5,typename _P6,typename _P7,typename _P8>
	struct handler_base<_R,TYPELIST_8(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4
		,typename _P5,typename _P6,typename _P7,typename _P8,typename _P9>
	struct handler_base<_R,TYPELIST_9(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4
		,typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,typename _P10>
	struct handler_base<_R,TYPELIST_10(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,typename _P5,
		typename _P6,typename _P7,typename _P8,typename _P9,typename _P10,typename _P11>
	struct handler_base<_R,TYPELIST_11(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12>
	struct handler_base<_R,TYPELIST_12(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
        typedef _P12 param12_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13>
	struct handler_base<_R,TYPELIST_13(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14>
	struct handler_base<_R,TYPELIST_14(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14,typename _P15>
	struct handler_base<_R,TYPELIST_15(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		typedef _P15 param15_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14,
		typename _P15,typename _P16>
	struct handler_base<_R,TYPELIST_16(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		typedef _P15 param15_type;
		typedef _P16 param16_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};


	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14,
		typename _P15,typename _P16,typename _P17>
	struct handler_base<_R,TYPELIST_17(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		typedef _P15 param15_type;
		typedef _P16 param16_type;
		typedef _P17 param17_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14,
		typename _P15,typename _P16,typename _P17,typename _P18>
	struct handler_base<_R,TYPELIST_18(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17,_P18)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		typedef _P15 param15_type;
		typedef _P16 param16_type;
		typedef _P17 param17_type;
		typedef _P18 param18_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17,_P18)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14,
		typename _P15,typename _P16,typename _P17,typename _P18,typename _P19>
	struct handler_base<_R,TYPELIST_19(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17,_P18,_P19)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		typedef _P15 param15_type;
		typedef _P16 param16_type;
		typedef _P17 param17_type;
		typedef _P18 param18_type;
		typedef _P19 param19_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17,_P18,_P19)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};

	template<typename _R,typename _P1,typename _P2,typename _P3,typename _P4,
		typename _P5,typename _P6,typename _P7,typename _P8,typename _P9,
		typename _P10,typename _P11,typename _P12,typename _P13,typename _P14,
		typename _P15,typename _P16,typename _P17,typename _P18,typename _P19,typename _P20>
	struct handler_base<_R,TYPELIST_20(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17,_P18,_P19,_P20)>: public handler_type_base<_R>{
		typedef _P1 param1_type;
		typedef _P2 param2_type;
		typedef _P3 param3_type;
		typedef _P4 param4_type;
		typedef _P5 param5_type;
		typedef _P6 param6_type;
		typedef _P7 param7_type;
		typedef _P8 param8_type;
		typedef _P9 param9_type;
		typedef _P10 param10_type;
		typedef _P11 param11_type;
		typedef _P12 param12_type;
		typedef _P13 param13_type;
		typedef _P14 param14_type;
		typedef _P15 param15_type;
		typedef _P16 param16_type;
		typedef _P17 param17_type;
		typedef _P18 param18_type;
		typedef _P19 param19_type;
		typedef _P20 parm20_type;
		virtual _R operator()(_P1,_P2,_P3,_P4,_P5,_P6,_P7,_P8,_P9,_P10,_P11,_P12,_P13,_P14,_P15,_P16,_P17,_P18,_P19,_P20)=0;
		virtual bool is_equal(handler_base*) = 0; 
		virtual handler_base* clone() = 0; 
	};



	//这里通过编译器反推函数的类型
    template<typename _R,typename _ParamList,typename _FuncType>
	class handler: public handler_base<_R,_ParamList>{
	public:
       typedef _FuncType func_type;
	   typedef handler_base<_R,_ParamList> base_type;
	   typedef typename base_type::param1_type  param1_type;
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
		handler(const func_type& func):_func(func){}
		//针对不同的特例，分别实现函数
		_R operator()(){return _func();}
			_R operator()(param1_type p)
			{return _func(p);}
			_R operator()(param1_type p1,param2_type p2)
			{return _func(p1,p2);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3)
			{return _func(p1,p2,p3);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4){return _func(p1,p2,p3,p4);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5)
			{return _func(p1,p2,p3,p4,p5);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6)
			{return _func(p1,p2,p3,p4,p5,p6);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7)
			{return _func(p1,p2,p3,p4,p5,p6,p7);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19);}
			_R operator()(param1_type p1,param2_type p2,param3_type p3,param4_type p4,param5_type p5,param6_type p6,param7_type p7,param8_type p8,param9_type p9,param10_type p10,param11_type p11,param12_type p12,param13_type p13,param14_type p14,param15_type p15,param16_type p16,param17_type p17,param18_type p18,param19_type p19,param20_type p20)
			{return _func(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20);}
			bool is_equal(base_type* r_value) 
			{	
				  handler* p = (handler*)(r_value); 
				   if (_func != p->_func) { return false; } 
					return true; 
			}
base_type* clone() {base_type* p = new handler(_func); return p; } 
	private:
		func_type _func;
	};
}
#endif