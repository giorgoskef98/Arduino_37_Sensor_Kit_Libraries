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


#include "KY010.h"


KY010::KY010() {
}


bool KY010::begin(uint8_t DATA_Pin) {
    PIN = DATA_Pin;
    pinMode(PIN, INPUT);

    return(true);

}


bool KY010::d_read() {
    return(digitalRead(PIN));
}


void KY010::attach_int(void){
    attachInterrupt(digitalPinToInterrupt(PIN), ISR_trig, RISING);
}


void ISR_trig(void){
    Serial.println("Sensor was interrupted");
}

