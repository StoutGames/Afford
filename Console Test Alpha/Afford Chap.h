#pragma once

//			© STOUT GAMES 2016

#include "Afford\Affordance.h"

namespace Stout {
namespace TAlpha {
namespace Afford {

	class Chap : public Stout::Afford::Base::Affordance {
	public:
		struct CallArgNameCall {

		};

		ST_AF_DECLARE_AFFORDANCE(Chap)

		ST_AF_DECLARE_AFFORDANCE_CALL(NameCall, CallArgNameCall)
	};

}
}
}