
#include "gtest/gtest.h"
#include "../../src/functional/TimedEvent.h"


TEST(FunctionalTimedEventTests, TriggerCallback)
{
	auto timedEvent = new func::TimedEvent();
	EXPECT_FALSE(timedEvent->eventTimedOut);
	timedEvent->eventTimer.triggerTimeout();
	EXPECT_TRUE(timedEvent->eventTimedOut);
}
