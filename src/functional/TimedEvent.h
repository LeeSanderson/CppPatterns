#pragma once
#include "../utils/Timer.h"

namespace functional {

	// Demo of using Timer function to set a flag when a timer expires
	class TimedEvent {
	public:
		TimedEvent();

		utils::Timer eventTimer;
		bool eventTimedOut = false;
	};

}