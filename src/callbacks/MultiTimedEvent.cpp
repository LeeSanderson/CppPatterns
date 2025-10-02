#include "MultiTimedEvent.h"

using namespace callbacks;

// To support multiple timers with callbacks, we need to check which timer triggered the callback.
// Again, the flow of control is not explicit in the callback code and requires knowledge of the Timer implementation.
MultiTimedEvent::MultiTimedEvent() 
	: eventTimer1(this), eventTimer2(this) 
{}

void MultiTimedEvent::handleTimeout(utils::Timer* t)
{
	if (t == &eventTimer1) {
		event1TimedOut = true;
	}
	else if (t == &eventTimer2) {
		event2TimedOut = true;
	}
}