/* 
    Arduino 37 Sensor Kit Libraries

    Sensor    --> KY-009 & KY-016 RGB LED module
    Datasheet --> https://datasheet4u.com/datasheet-pdf/Joy-IT/KY-009/pdf.php?id=1402022
              --> https://datasheet4u.com/datasheet-pdf/Joy-IT/KY-016/pdf.php?id=1402027    

    The KY-009 & KY-016 RGB LED module is used to emit a wide range of colors by mixing red, green and blue light. 

    Created July 2022
    by George Kefalas - hosted on https://github.com/giorgoskef98
*/


#ifndef KY009_016_Lib_h
#define KY009_016_Lib_h

#include "Arduino.h"


class KY009_016
{
public:

    KY009_016();
    bool begin(uint8_t R_PIN, uint8_t G_PIN, uint8_t B_PIN); 
    void r_write(uint8_t R_Value);
    void g_write(uint8_t G_Value);
    void b_write(uint8_t B_Value);
    void write(uint8_t R_Value, uint8_t G_Value, uint8_t B_Value);
    
private:
    uint8_t R_PIN;
    uint8_t G_PIN;
    uint8_t B_PIN;

};


#endif
