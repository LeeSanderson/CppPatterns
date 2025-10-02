#include "TimedEvent.h"

using namespace templated;

TimedEvent::TimedEvent() : eventTimer(this, &TimedEvent::onEventTimerTimeout) {}

void TimedEvent::onEventTimerTimeout()
{
	eventTimedOut = true;
}
