#include "gtest/gtest.h"
#include "../../src/callbacks/TimedEvent.h"

using namespace callbacks;

TEST(TimedEventTests, TriggerCallback)
{
	auto timedEvent = new TimedEvent();
	EXPECT_FALSE(timedEvent->eventTimedOut);
	timedEvent->eventTimer.start();
	EXPECT_TRUE(timedEvent->eventTimedOut);
}