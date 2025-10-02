#include "TimedEvent.h"
#include <functional>

func::TimedEvent::TimedEvent() : eventTimer([this] { eventTimedOut = true; }) {}