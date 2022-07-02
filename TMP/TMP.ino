float temp, cache;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    cache = temp;
    temp = ((analogRead(A0) / 1024.0 * 5.0) - 0.5) / 100;
    if (cache != temp)
        Serial.println("Temperature: " + String (temp) + "°C";
}