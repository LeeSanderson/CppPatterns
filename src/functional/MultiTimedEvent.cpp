#include "MultiTimedEvent.h"

using namespace functional;

// Functional approach makes control flow explicit and avoids need for checking which timer triggered the callback
MultiTimedEvent::MultiTimedEvent() :
	eventTimer1([this] { setEventTimeout1(); }),
	eventTimer2([this] { eventTimedOut2 = true; })
{}

