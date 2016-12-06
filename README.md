# LokROB

Relay control

General description

The arduino receives information from the heat sensor and saves it's starting
temperature in Celsius and allows electricity to go through the relay, 
in this case this allows an element heat up water, it does this for 
temperature*1000 milliseconds. If the sensor detects a temperature higher 
than it's starting temperature it activates the relay that extra amount.

Components

For this project you will need:
An Arduino,
A relay,
A DHT temperature sensor,
A breadboard for additional connections,
Electricity,
Something for the relay to control

Opiration

Simply upload the code to the arduino and make sure everything is connected properly.