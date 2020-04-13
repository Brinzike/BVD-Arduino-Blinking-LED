#include <BVD_Blinking.h>
#include "Arduino.h"

void setup_BVD_Blink()
{
	pinMode(LED_BUILTIN, OUTPUT);
}

void BVD_Blink(int durata)
{
	digitalWrite(LED_BUILTIN, 1);
	delay(durata);
	digitalWrite(LED_BUILTIN, 0);
	delay(durata);
}

void BVD_Blink_Morse(char x)
{
	switch(x)
	{
		case 'A':
		{
			BVD_Blink(250);
		}
	}
}
	