#include "stdafx.h"
#include "Afford\Scheduletron.h"

#include "Afford Chap.h"

int main()
{
	Stout::Afford::Base::Scheduletron		tron;
	Stout::Afford::Base::ScheduleRequest	req;

	tron.MagicPushScheduleRequest(req);

    return 0;
}

