#include "gtest/gtest.h"
#include "../../src/templated/TimedEvent.h"

using namespace templated;

TEST(TemplatedTimedEventTests, TriggerCallback)
{
	auto timedEvent = new TimedEvent();
	EXPECT_FALSE(timedEvent->eventTimedOut);
	timedEvent->eventTimer.start();
	EXPECT_TRUE(timedEvent->eventTimedOut);
}
