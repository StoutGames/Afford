#pragma once

//			� STOUT GAMES 2016

namespace Stout {
namespace Afford {
namespace Base {

	class AffordanceCallData {
	};

	class Affordance {
	};

	#define ST_AF_DECLARE_AFFORDANCE(name)
	#define ST_AF_DEFINE_AFFORDANCE(name)

	#define ST_AF_DECLARE_AFFORDANCE_CALL(name, argument) \
	public: \
		void _aff_call_##name(argument&);

}
}
}