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

		void start();
	private:
		TimerCallback* cb;
	};

	class FunctionTimerCallback : public Timer::TimerCallback
	{
	public:
		FunctionTimerCallback(const std::function<void()>& cb) : callback_(cb) {}
		void handleTimeout(Timer* t) override
		{
			if (callback_) {
				callback_();
			}
		}

	private:
		std::function<void()> callback_;
	};

	template <typename T>
	class TemplatedTimer
	{
	public:
		using Method = void (T::*)();
		TemplatedTimer(T* instance, Method method) : instance_(instance), method_(method) {}
		void start();
	private:
		T* instance_;
		Method method_;
	};
}