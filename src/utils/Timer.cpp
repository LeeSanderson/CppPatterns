#include "Timer.h"
#include <functional>

utils::Timer::Timer(const std::function<void()>& onTimeout) : cb(new utils::FunctionTimerCallback(onTimeout)) {}

void utils::Timer::triggerTimeout()
{
	if (cb) {
		cb->handleTimeout(this);
	}
}