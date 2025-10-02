#include "MultiTimedEvent.h"

using namespace templated;

MultiTimedEvent::MultiTimedEvent():
	eventTimer1(this, &MultiTimedEvent::onEventTimer1Timeout),
	eventTimer2(this, &MultiTimedEvent::onEventTimer2Timeout)	
{}

void MultiTimedEvent::onEventTimer1Timeout()
{
	eventTimedOut1 = true;
}

void MultiTimedEvent::onEventTimer2Timeout()
{
	eventTimedOut2 = true;
}
