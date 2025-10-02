#include "TimedEvent.h"
#include <functional>

using namespace functional;

// Functional approach makes control flow explicit
TimedEvent::TimedEvent() : eventTimer([this] { eventTimedOut = true; }) {}