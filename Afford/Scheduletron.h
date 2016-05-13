#pragma once

#include "Afford/Node.h"
#include "Afford/Affordance.h"
#include "Afford/Schedule Request.h"

//			© STOUT GAMES 2016

namespace Stout {
namespace Afford {
namespace Base {

	class Scheduletron {
	public:
		Scheduletron();
		~Scheduletron();

		void	MagicPushScheduleRequest(Stout::Afford::Base::ScheduleRequest&);
	};

}
}
}