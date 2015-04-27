# StringedEnum

It is often desirable to output enumerators, e.g. for debugging purposes. However, in those cases, one wants a 
textual representation of the enumerators. 

This library provides a macro that simultaneously defines an enumeration, and alongside with it, functions that convert
between the stringized enumerators and the value of those enumerators.
