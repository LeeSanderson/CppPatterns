#include "TimedEvent.h"

namespace callbacks
{
	// Flow of control goes from Timer->TimerCallback->TimedEvent is not explicit in callback code
	// and requires knowledge of the Timer implementation
	TimedEvent::TimedEvent() : eventTimer(this) {}

	void TimedEvent::handleTimeout(utils::Timer* t)
	{
		eventTimedOut = true;
	}
}