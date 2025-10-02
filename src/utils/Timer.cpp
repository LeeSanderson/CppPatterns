#include "Timer.h"
#include <functional>

using namespace utils;

Timer::Timer(const std::function<void()>& onTimeout) : cb(new FunctionTimerCallback(onTimeout)) {}

void Timer::triggerTimeout()
{
	if (cb) {
		cb->handleTimeout(this);
	}
}