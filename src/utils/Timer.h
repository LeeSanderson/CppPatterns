#pragma once


class Timer {
public:
	struct TimerCallback {
		virtual void handleTimeout(Timer* t) = 0;
		virtual ~TimerCallback() = default;
	};

	Timer(TimerCallback* c) : cb(c) {}

	void triggerTimeout()
	{
		if (cb) {
			cb->handleTimeout(this);
		}
	}
private:
	TimerCallback* cb;
};

class FunctionTimerCallback : public Timer::TimerCallback
{
public:
	FunctionTimerCallback(const std::function<void(Timer*)>& cb) : callback(cb) {}
	void handleTimeout(Timer* t) override
	{
		if (callback) {
			callback(t);
		}
	}

private:
	std::function<void(Timer*)> callback;
};
