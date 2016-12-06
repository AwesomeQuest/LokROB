# LokROB

This project is one where an aruino is hooked up to a relay and heat sensor.

The arduino receives information from the heat sensor and saves it's starting
temperature in Celsius and allows electricity to go through the relay, 
in this case this allows an element heat up water, it does this for 
temperature*1000 milliseconds. If the sensor detects a temperature higher 
than it's starting temperature it heats the element that extra amount.