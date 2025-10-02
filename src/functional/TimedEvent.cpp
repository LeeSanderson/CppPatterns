#include "TimedEvent.h"
#include <functional>

namespace functional
{
	TimedEvent::TimedEvent() : eventTimer([this] { eventTimedOut = true; }) {}
}