
void setup() {
    pinMode(13, OUTPUT); //13 can be replaced for the variable name LED_BUILTIN
}

void loop() {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}
