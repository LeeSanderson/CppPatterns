#pragma once
#include "../utils/Timer.h"

using namespace utils;

namespace templated
{
	// Demo of using templated Timer to set a flags when multiple timer expires
	class MultiTimedEvent {
	public:
		MultiTimedEvent();

		TemplatedTimer<MultiTimedEvent> eventTimer1;
		TemplatedTimer<MultiTimedEvent> eventTimer2;
		bool eventTimedOut1 = false;
		bool eventTimedOut2 = false;
		void onEventTimer1Timeout();
		void onEventTimer2Timeout();
	};
}