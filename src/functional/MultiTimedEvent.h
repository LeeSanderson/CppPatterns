#pragma once
#include "../utils/Timer.h"

namespace functional 
{
	// Demo of using Timer function to set a flags when multiple timer expires
	class MultiTimedEvent {
	public:
		MultiTimedEvent();

		utils::Timer eventTimer1;
		utils::Timer eventTimer2;
		bool eventTimedOut1 = false;
		bool eventTimedOut2 = false;
		void setEventTimeout1() { eventTimedOut1 = true; }
	};
}