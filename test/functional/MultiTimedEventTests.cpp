#include "gtest/gtest.h"
#include "../../src/functional/MultiTimedEvent.h"

using namespace functional;

TEST(FunctionalMultiTimedEventTests, TriggerEvent1)
{
	auto multiTimedEvent = new MultiTimedEvent();
	EXPECT_FALSE(multiTimedEvent->eventTimedOut1);
	EXPECT_FALSE(multiTimedEvent->eventTimedOut2);

	multiTimedEvent->eventTimer1.triggerTimeout();

	EXPECT_TRUE(multiTimedEvent->eventTimedOut1);
	EXPECT_FALSE(multiTimedEvent->eventTimedOut2);
}

TEST(FunctionalMultiTimedEventTests, TriggerEvent2)
{
	auto multiTimedEvent = new MultiTimedEvent();
	EXPECT_FALSE(multiTimedEvent->eventTimedOut1);
	EXPECT_FALSE(multiTimedEvent->eventTimedOut2);

	multiTimedEvent->eventTimer2.triggerTimeout();

	EXPECT_TRUE(multiTimedEvent->eventTimedOut2);
	EXPECT_FALSE(multiTimedEvent->eventTimedOut1);
}	