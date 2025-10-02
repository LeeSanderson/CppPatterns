
#include "gtest/gtest.h"
#include "../../src/callbacks/TimedEvent.h"

TEST(TimedEventTests, TriggerCallback)
{
	auto timedEvent = new callbacks::TimedEvent();
	EXPECT_FALSE(timedEvent->eventTimedOut);
	timedEvent->eventTimer.triggerTimeout();
	EXPECT_TRUE(timedEvent->eventTimedOut);
}
