#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <unity.h>

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_foobar(void) {
    TEST_ASSERT_TRUE(true);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_foobar);
    UNITY_END();
}

void loop() {
    digitalWrite(25, HIGH);
    delay(100);
    digitalWrite(25, LOW);
    delay(500);
}