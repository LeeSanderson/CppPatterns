#include "MultiTimedEvent.h"

namespace functional
{
	// Functional approach makes control flow explicit and avoids need for checking which timer triggered the callback
	MultiTimedEvent::MultiTimedEvent() :
		eventTimer1([this] { eventTimedOut1 = true; }),
		eventTimer2([this] { eventTimedOut2 = true; })
	{}
}
