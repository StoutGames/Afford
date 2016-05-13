#pragma once

//			© STOUT GAMES 2016

#include "Afford\Affordance.h"

namespace Stout {
namespace TAlpha {
namespace Afford {

	class AlphaMan : public Stout::Afford::Base::Affordance {
	public:
		struct CallArgBoot {

		};

		ST_AF_DECLARE_AFFORDANCE(AlphaMan)

		ST_AF_DECLARE_AFFORDANCE_CALL(Boot, CallArgBoot)
	};

}
}
}