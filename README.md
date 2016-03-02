# StringedEnum

It is often desirable to convert between textual representations and values of enumerators, e.g. for debugging purposes.

This library provides macros that define an enumeration, and alongside with it, `constexpr` functions that convert between the enumerators' values and names. It supports scoped enumerations, underlying types and assigned values without using wrappers of any kind. An example definition from [`test_main.cxx`](https://github.com/Arcoth/StringedEnum/blob/master/test_main.cxx):

    STRING_ENUM
    (
	    class MyEnum : unsigned long long, MyEnumInfo,

	    (Enumerator1, 7),
	    (Enumerator2, 89),
	    (Enumerator3)
    )

Note that `MyEnumInfo` is the namespace where auxiliary functions will be defined in; the enumeration itself will be defined in the same scope as the macro invocation. If there are any commas in the *enum-base* (the type specified after the colon), they must be surrounded by parentheses, otherwise use a typedef.

Provided are:

 - `enum_size`: The number of enumerators.
 - `strings`: An array of `enum_size` `char const*`s, the names of the enumerators.
 - `values`: The underlying value of each enumerator.
 - `fromString`: Obtain an enumerator from a `string`. Note that this lookup could be sped up by using `Constainer`'s `flat_map`.
 -  `toString`: Convert an enumerator to a string. This is either done via a `switch` statement or a lookup table, depending on the continuity of the values.
