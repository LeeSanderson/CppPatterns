#include "gtest/gtest.h"
#include <functional>
#include "../../src/utils/Timer.h"
	

TEST(TimerTests, TriggerCallback)
{
	int callbackCount = 0;
	auto callback = [&callbackCount] { callbackCount++; };
	utils::Timer t(new utils::FunctionTimerCallback(callback));
	t.triggerTimeout();
	EXPECT_EQ(callbackCount, 1);
}

TEST(TimerTests, TriggerFunctionCallback)
{
	int callbackCount = 0;
	auto callback = [&callbackCount] { callbackCount++; };
	utils::Timer t(callback);
	t.triggerTimeout();
	EXPECT_EQ(callbackCount, 1);
}