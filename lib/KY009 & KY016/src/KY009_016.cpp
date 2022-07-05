/* 
    Arduino 37 Sensor Kit Libraries

    Sensor    --> KY-009 & KY-016 RGB LED module
    Datasheet --> https://datasheet4u.com/datasheet-pdf/Joy-IT/KY-009/pdf.php?id=1402022
              --> https://datasheet4u.com/datasheet-pdf/Joy-IT/KY-016/pdf.php?id=1402027    

    The KY-009 & KY-016 RGB LED module is used to emit a wide range of colors by mixing red, green and blue light. 

    Created July 2022
    by George Kefalas - hosted on https://github.com/giorgoskef98

*/


#include "KY009_016.h"


KY009_016::KY009_016() {
}


bool KY009_016::begin(uint8_t R_PIN, uint8_t G_PIN, uint8_t B_PIN) {
    this->R_PIN = R_PIN;
    this->G_PIN = G_PIN;
    this->B_PIN = B_PIN;

    pinMode(this->R_PIN, OUTPUT);
    pinMode(this->G_PIN, OUTPUT);
    pinMode(this->B_PIN, OUTPUT);

    return(true);

}


void KY009_016::r_write(uint8_t R_Value){
    analogWrite(this->R_PIN,R_Value);
}


void KY009_016::g_write(uint8_t G_Value){
    analogWrite(this->G_PIN,G_Value);
}


void KY009_016::b_write(uint8_t B_Value){
    analogWrite(this->B_PIN,B_Value);
}


void KY009_016::write(uint8_t R_Value, uint8_t G_Value, uint8_t B_Value){
    r_write(R_Value);
    g_write(G_Value);
    b_write(B_Value);
}