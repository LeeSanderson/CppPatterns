#include "Timer.h"
#include <functional>

using namespace utils;

Timer::Timer(const std::function<void()>& onTimeout) : cb(new FunctionTimerCallback(onTimeout)) {}

// Simulate timer expiry by directly calling the callback
void Timer::start()
{
	if (cb) {
		cb->handleTimeout(this);
	}
}

template <typename T>
void TemplatedTimer<T>::start()
{
	instance_->*method_();
}
