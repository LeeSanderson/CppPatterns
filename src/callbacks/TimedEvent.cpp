#include "TimedEvent.h"

callbacks::TimedEvent::TimedEvent() : eventTimer(this) {}

void callbacks::TimedEvent::handleTimeout(utils::Timer* t)
{
	eventTimedOut = true;
}