#include "TimedEvent.h"

namespace callbacks
{
	TimedEvent::TimedEvent() : eventTimer(this) {}

	void TimedEvent::handleTimeout(utils::Timer* t)
	{
		eventTimedOut = true;
	}
}