#include <BVD_Blinking.h>

void setup() 
{
    setup_BVD_Blink();
}

void loop() 
{
    BVD_Blink(250);
    BVD_Blink(1000);
    BVD_Blink(250);
    BVD_Blink(1000);
}
