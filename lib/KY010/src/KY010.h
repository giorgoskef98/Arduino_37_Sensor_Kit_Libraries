/* 
    Arduino 37 Sensor Kit Libraries

    Sensor    --> KY-010 Photo Interrupter
    Datasheet --> https://datasheet4u.com/datasheet-pdf/Joy-IT/KY-010/pdf.php?id=1402023

    The KY-010 Photo Interrupter module consists of an optical emitter and a detector.
    The sensor is using a beam between the emitter and the detector to check if the path
    of the beam is being blocked by an object. 

    Created June 2022
    by George Kefalas - hosted on https://github.com/giorgoskef98

*/


#ifndef KY010_Lib_h
#define KY010_Lib_h

#include "Arduino.h"


class KY010
{
public:

    KY010();
    bool begin(uint8_t DATA_Pin); 
    bool d_read(void);
    void attach_int(void);
    
private:
    uint8_t PIN;

};


void ISR_trig(void);



#endif
