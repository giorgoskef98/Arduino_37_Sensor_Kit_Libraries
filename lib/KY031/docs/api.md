# KY031 Knock Sensor Module Library

## KY031 Class

### `KY031.begin(GPIO_PIN)`

#### Description

Initializes the KY031 library and sets the PIN that is used from the sensor.

#### Syntax

```
KY031.begin(GPIO_PIN);
```

#### Parameters
- GPIO_PIN: the pin that is used from the sensor in order for the microcontroller to be able to read the status of the sensor while it detects a vibration.

#### Returns
- The result of the function weither there was an error or the function executed properly. 

#### Example

```
#include "KY031.h"

#define SENSOR_PIN xx

KY031 sensor  

void setup()
{
    KY031.begin(SENSOR_PIN);
}

void loop () {}
```

### `KY031.d_read()`

#### Description

Reads the digital status of the sensor. The output of the function is reversed because when the sensor is idle the signal is HiGH but when it is triggered the signal is falling to GND. 

#### Syntax

```
KY031.d_read();
```

#### Parameters
- void

#### Returns
- The result of the function is the digital signal of the sensor's pin. This can be either HIGH in case the sensor is triggered or LOW.  

```
void setup() 
{
    ...
}

void loop()
{
    int status = KY031.d_read();
}
```

### `KY031.attach_int()`

#### Description

Attach an interrupt to check the status of the sensor and trigger a function whenever the sensor is activated. The activation is happening when the signal is falling since the sensor idle state is HIGH and when it triggers it is falling to GND/LOW.

#### Syntax

```
KY031.attach_int();
```

#### Parameters
- void

#### Returns
- void  

### `ISR_trig`

#### Description

This function is executed whenever the interrrupt of the sensor is triggered and then it prints a message in the Serial monitor. 
The function can also be used for other purposes. 

#### Parameters
- void

#### Returns
- void 

```
void setup() 
{
    sensor.begin(S_PIN);
    sensor.attach_int();
}

void loop()
{
    delay(1); 
}
```