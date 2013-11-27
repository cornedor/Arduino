#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define VERSION             "1.0.0"

#define STATUSLCD_ENABLED   1
#define STATUSLCD_ADDRESS   0x27
#define STATUSLCD_ROWS      2
#define STATUSLCD_COLS      16

#define ROBOT_STOP          0x00
#define ROBOT_STRAVE_LEFT   0x01
#define ROBOT_STRAVE_RIGHT  0x02
#define ROBOT_SETDIR        0x03
#define ROBOT_SETSPEED      0x04

LiquidCrystal_I2C statusLcd(STATUSLCD_ADDRESS, STATUSLCD_ROWS, STATUSLCD_COLS);

void setup()
{
    // Setup the enviroment

    statusLcd.init();
    statusLcd.backlight();
    statusLcd.print("      SPMR");

    // Startup the serial port
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available() > 0)
    {
        byte data = Serial.read();

        if(data == ROBOT_STRAVE_RIGHT)
        {
            // Strafe to the right
        }
        else if(data == ROBOT_STRAVE_LEFT)
        {
            // Strafe to the left
        }
        else if(data == ROBOT_SETDIR)
        {
            // Set the direction
        }
        else if(data == ROBOT_SETSPEED)
        {
            // Set the robot speed
        }
    }
}