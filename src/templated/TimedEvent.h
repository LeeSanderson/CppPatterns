#pragma once
#include "../utils/Timer.h"

namespace templated 
{
	class TimedEvent
	{
	public:
		TimedEvent();
		utils::TemplatedTimer<TimedEvent> eventTimer;
		bool eventTimedOut = false;
	private:
		void onEventTimerTimeout();
	};
}