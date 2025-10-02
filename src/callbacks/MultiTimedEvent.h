#pragma once
#include "../utils/Timer.h"

namespace callbacks
{
	// Demo of using Timer callbacks to set a flags when multiple timer expires
	class MultiTimedEvent : public utils::Timer::TimerCallback {
	public:
		MultiTimedEvent();

		utils::Timer eventTimer1;
		utils::Timer eventTimer2;
		bool event1TimedOut = false;
		bool event2TimedOut = false;

		// Implementation of Timer::Callback interface
		void handleTimeout(utils::Timer* t) override;
	};
}