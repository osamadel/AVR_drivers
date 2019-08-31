# AVR Drivers

Currently, this repo will only have basic drivers for the ATmega32 family of microcontrollers.

Provided drivers until now:

* M_DIO

### M_DIO

ATmega32 Microcontrollers have 4 ports, named (in this driver) `M_DIO_PORTA`, `M_DIO_PORTB`, `M_DIO_PORTC` and `M_DIO_PORTD` - each has 8 pins which can be configured as `M_DIO_OUTPUT`, `M_DIO_INPUT_FLOAT` or `M_DIO_INPUT_PULLUP` and take one of two values `HIGH` / `1` or `LOW` / `0`. 

#### How to use?

In your C file, add the standard types header file first `#include "stdtypes.h"` then add `#include "M_DIO.h"`, then you will be able to use the following interfaces:

1. `void M_DIO_init (void)`
2. `void M_DIO_pinMode (u8 pin_number, u8 mode)`
3. `void M_DIO_portMode (u8 port_number, u8 mode, u8 mask)`
4. `void M_DIO_pinWrite (u8 pin_number, u8 val)`
5. `void M_DIO_portWrite (u8 port_number, u8 val, u8 mask)`
6. `u8 M_DIO_pinRead (u8 pin_number)`
7. `u8 M_DIO_portRead (u8 port_number, u8 mask)`

##### M_DIO_init

Initializes the DIO pins mode as configured in `M_DIO_config.h`.
For each pin (from `M_DIO_PIN0` to `M_DIO_PIN31`) you can change the values of macros `PIN0_MODE` to `PIN31_MODE`, to one of the three pin modes `M_DIO_OUTPUT`, `M_DIO_INPUT_FLOAT` or `M_DIO_INPUT_PULLUP`.
Executing the `M_DIO_init` function will run throught all pin definitions and set the pin modes as configured - at compile time.

##### M_DIO_pinMode

Given a pin number (from `M_DIO_PIN0` to `M_DIO_PIN31`) and a mode (`M_DIO_OUTPUT`, `M_DIO_INPUT_FLOAT` or `M_DIO_INPUT_PULLUP`), set the given pin's mode to the given mode - at runtime.

##### M_DIO_portMode

Given a port (`M_DIO_PORTA`, `M_DIO_PORTB`, `M_DIO_PORTC` or `M_DIO_PORTD`), a mode (`M_DIO_OUTPUT`, `M_DIO_INPUT_FLOAT` or `M_DIO_INPUT_PULLUP`), and a mask of 8 bits, where you want to set the pins to the given mode are 1's and the rest to 0's, set the given port pin's mode to the given mode - at runtime.

##### M_DIO_pinWrite

Given a pin number (from `M_DIO_PIN0` to `M_DIO_PIN31`) and a state value (`HIGH` or `LOW`), set the given pin's output to the given state.

##### M_DIO_portWrite

Given a port (`M_DIO_PORTA`, `M_DIO_PORTB`, `M_DIO_PORTC` or `M_DIO_PORTD`), a state value (`HIGH` or `LOW`), and a mask of 8 bits, where you want to output the given state value are 1's and the rest to 0's, set the value at given port's pins.

##### M_DIO_pinRead

Given a pin number (from `M_DIO_PIN0` to `M_DIO_PIN31`), return the voltage state value (1 for `HIGH` and 0 for `LOW`) at the given pin.

##### M_DIO_portRead

Given a port (`M_DIO_PORTA`, `M_DIO_PORTB`, `M_DIO_PORTC` or `M_DIO_PORTD`) and a mask of 8 bits, return the voltage state values (1's for `HIGH` and 0's for `LOW`) at the corresponding locations of the 1's of the mask in the given port.
