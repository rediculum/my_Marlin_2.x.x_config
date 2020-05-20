#define PRINTER_NAME "ReDi's TT"  // Change this to whatever you wish, or leave it as it is.

//#define SDSUPPORT

#define FULL_GRAPHIC_SMART        // Enable this if you have a RepRap Discount Full Graphic Smart Controller (The
                                    // stock controller is a RepRap Discount Smart Controller)

#define MOTHERBOARD BOARD_MKS_GEN_L         // Newer controller board with replacable stepper drivers

//#define BLTOUCH         // ANTClabs BLTouch sensor (might also work with clones)

//#define BILINEAR
#define MANUAL

#define SENSOR_LEFT        0
#define SENSOR_RIGHT       40
#define SENSOR_FRONT       20
#define SENSOR_BEHIND      0

#define DEFAULT_MAX_ACCELERATION  { 1000,  1000, 100, 10000 }

#define Hot_PLA     205
#define Bed_PLA      70

#define Hot_ABS 		245
#define Bed_ABS 		95

#define Hot_PETG 		230
#define Bed_PETG     80

#define RGB_LED

#define ST7920_DELAY_2 DELAY_NS(400)