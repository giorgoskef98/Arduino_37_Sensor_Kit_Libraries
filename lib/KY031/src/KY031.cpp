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


#include "KY031.h"


KY031::KY031() {
}


bool KY031::begin(uint8_t PIN) {
    this->PIN = PIN;
    pinMode(PIN, INPUT);

    return(true);
}


bool KY031::d_read() {
    return(digitalRead(PIN));
}


void KY031::attach_int(void){
    attachInterrupt(digitalPinToInterrupt(PIN), ISR_trig, RISING);
}


void ISR_trig(void){
    Serial.println("Sensor was interrupted");
}

