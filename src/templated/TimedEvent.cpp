#include "TimedEvent.h"

using namespace templated;

TimedEvent::TimedEvent() : eventTimer(this, &TimedEvent::setTimedOut) {}

void TimedEvent::setTimedOut()
{
	eventTimedOut = true;
}
