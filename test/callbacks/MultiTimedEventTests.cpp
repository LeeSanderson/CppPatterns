#include "gtest/gtest.h"
#include "../../src/callbacks/MultiTimedEvent.h"

using namespace callbacks;

TEST(MultiTimedEvent, TriggerEvent1)
{
	auto multiTimedEvent = new MultiTimedEvent();
	EXPECT_FALSE(multiTimedEvent->event1TimedOut);
	EXPECT_FALSE(multiTimedEvent->event2TimedOut);

	multiTimedEvent->eventTimer1.start();

	EXPECT_TRUE(multiTimedEvent->event1TimedOut);
	EXPECT_FALSE(multiTimedEvent->event2TimedOut);
}

TEST(MultiTimedEvent, TriggerEvent2)
{
	auto multiTimedEvent = new MultiTimedEvent();
	EXPECT_FALSE(multiTimedEvent->event1TimedOut);
	EXPECT_FALSE(multiTimedEvent->event2TimedOut);

	multiTimedEvent->eventTimer2.start();

	EXPECT_TRUE(multiTimedEvent->event2TimedOut);
	EXPECT_FALSE(multiTimedEvent->event1TimedOut);
}