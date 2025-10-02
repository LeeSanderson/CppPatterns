#pragma once
#include <functional>

namespace utils {
	class Timer {
	public:
		struct TimerCallback {
			virtual void handleTimeout(Timer* t) = 0;
			virtual ~TimerCallback() = default;
		};

		Timer(TimerCallback* onTimeout) : cb(onTimeout) {}
		Timer(const std::function<void()>& onTimeout);

		void triggerTimeout();
	private:
		TimerCallback* cb;
	};

	class FunctionTimerCallback : public Timer::TimerCallback
	{
	public:
		FunctionTimerCallback(const std::function<void()>& cb) : callback(cb) {}
		void handleTimeout(Timer* t) override
		{
			if (callback) {
				callback();
			}
		}

	private:
		std::function<void()> callback;
	};
}