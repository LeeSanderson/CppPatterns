#include "gtest/gtest.h"
#include "../../src/functional/TimedEvent.h"

using namespace functional;

TEST(FunctionalTimedEventTests, TriggerCallback)
{
	auto timedEvent = new TimedEvent();
	EXPECT_FALSE(timedEvent->eventTimedOut);
	timedEvent->eventTimer.triggerTimeout();
	EXPECT_TRUE(timedEvent->eventTimedOut);
}
