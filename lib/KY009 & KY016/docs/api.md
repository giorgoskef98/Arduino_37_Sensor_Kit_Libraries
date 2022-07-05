# KY009_016 RGB LED Module Library

## KY009_016 Class

### `KY009_016.begin(RED_PIN, GREEN_PIN, BLUE_PIN)`

#### Description

Initializes the KY009_016 library and sets the PIN that is used from the Red, Blue and Green pins of the module.

#### Syntax

```
KY009_016.begin(RED_PIN, GREEN_PIN, BLUE_PIN);
```

#### Parameters
- RED_PIN: the pin that is used from the sensor in order for the microcontroller to be able to control the signal that is sent for the Red color.
- GREEN_PIN: the pin that is used from the sensor in order for the microcontroller to be able to control the signal that is sent for the Green color.
- BLUE_PIN: the pin that is used from the sensor in order for the microcontroller to be able to control the signal that is sent for the Blue color.

#### Returns
- The result of the function weither there was an error or the function executed properly. 

#### Example

```
#include "KY009_016.h"

#define RED_PIN x1
#define GREEN_PIN x2
#define BLUE_PIN x3

KY009_016 sensor  

void setup()
{
    KY009_016.begin(RED_PIN, GREEN_PIN, BLUE_PIN);
}

void loop () {}
```

### `KY009_016.r_write(RED_Value)`

#### Description

Set the signal of the red pin to the value that is given as an argument. 

#### Syntax

```
KY009_016.r_write(red_value);
```

#### Parameters
- uint8_t: The decimal value that will be set for signal of the Red Led. 

#### Returns
- void  

### `KY009_016.g_write(GREEN_Value)`

#### Description

Set the signal of the green pin to the value that is given as an argument. 

#### Syntax

```
KY009_016.g_write(green_value);
```

#### Parameters
- uint8_t: The decimal value that will be set for signal of the Green Led. 

#### Returns
- void  

### `KY009_016.b_write(Blue_Value)`

#### Description

Set the signal of the blue pin to the value that is given as an argument. 

#### Syntax

```
KY009_016.b_write(blue_value);
```

#### Parameters
- uint8_t: The decimal value that will be set for signal of the Blue Led. 

#### Returns
- void  

```
void setup() 
{
    ...
}

void loop()
{
    KY009_016.r_write(Red_Value);
    KY009_016.g_write(Green_Value);
    KY009_016.b_write(Blue_Value);
}
```

### `KY009_016.write(Red_value, Green_Value, Blue_Value)`

#### Description

Set the signal of the Red, Green and Blue pins to the value that is given as arguments in order to set the module to a specific color. 

#### Syntax

```
KY009_016.write(red_value, green_value, blue_value);
```

#### Parameters
- uint8_t: The decimal value that will be set for signal of the Red Led. 
- uint8_t: The decimal value that will be set for signal of the Green Led.
- uint8_t: The decimal value that will be set for signal of the Blue Led.

#### Returns
- void  

```
void setup() 
{
    ...
}

void loop()
{
    KY009_016.write(Red_Value, Green_Value, Blue_Value);
}
```