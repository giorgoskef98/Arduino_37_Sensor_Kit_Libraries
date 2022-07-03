# KY010 Light Barier Module Library

## KY010 Class

### `KY010.begin()`

#### Description

Initializes the KY010 library and sets the PIN that is used from the sensor.

#### Syntax

```
KY010.begin(GPIO_PIN);
```

#### Parameters
- GPIO_PIN: the pin that is used from the sensor in order for the microcontroller to be able to read the status of the sensor.

#### Returns
- The result of the function weither there was an error or the function executed properly. 

#### Example

```
#include "KY010.h"

#define SENSOR_PIN xx

KY010 sensor  

void setup()
{
    KY010.begin(SENSOR_PIN);
}

void loop () {}
```

### `KY010.d_read()`

#### Description

Reads the status of the sensor. 

#### Syntax

```
KY010.d_read();
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
    int status = KY010.d_read();
}
```

### `KY010.attach_int()`

#### Description

Attach an interrupt to check the status of the sensor and trigger a function whenever the sensor is activated. 

#### Syntax

```
KY010.attach_int();
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