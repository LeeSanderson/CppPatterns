
#include "gtest/gtest.h"
#include <functional>
#include "../../src/utils/Timer.h"
	

TEST(TimerTests, TriggerCallback)
{
	int callbackCount = 0;
	auto callback = [&callbackCount](Timer* timer) { callbackCount++; };
	Timer t(new FunctionTimerCallback(callback));
	t.triggerTimeout();
	EXPECT_EQ(callbackCount, 1);
}
