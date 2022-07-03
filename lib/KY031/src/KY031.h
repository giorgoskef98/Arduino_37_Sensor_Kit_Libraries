/* 
    Arduino 37 Sensor Kit Libraries

    Sensor    --> KY-031 Knock Sensor
    Datasheet --> https://www.datasheet4u.com/datasheet-pdf/Joy-IT/KY-031/pdf.php?id=1402041

    The KY-031 Knock Sensor module is a sensor that detects vidration and sends a sigal through the S Pin
    when it is knocked or  tapped. The output of the sensor is digital while the operating voltage is 3.3V~5V.

    Scematics
    S           --> Signal Pin
    Middle Pin  --> +5V
    -           --> GND

    Created July 2022
    by George Kefalas - hosted on https://github.com/giorgoskef98

*/


#ifndef KY031_Lib_h
#define KY031_Lib_h

#include "Arduino.h"


class KY031
{
public:

    KY031();
    bool begin(uint8_t PIN); 
    bool d_read(void);
    void attach_int(void);
    
private:
    uint8_t PIN;

};


void ISR_trig(void);



#endif
