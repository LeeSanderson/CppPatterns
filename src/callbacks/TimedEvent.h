#pragma once
#include "../utils/Timer.h"

namespace callbacks
{
	// Demo of using Timer callbacks to set a flag when a timer expires
	class TimedEvent : public utils::Timer::TimerCallback {
	public:
		TimedEvent();

		utils::Timer eventTimer;
		bool eventTimedOut = false;

		// Implementation of Timer::Callback interface
		void handleTimeout(utils::Timer* t) override;
	};
}