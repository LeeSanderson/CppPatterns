#include "TimedEvent.h"
#include <functional>

namespace functional
{
	// Functional approach makes control flow explicit
	TimedEvent::TimedEvent() : eventTimer([this] { eventTimedOut = true; }) {}
}