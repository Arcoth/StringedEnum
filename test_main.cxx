#include "StringedEnum.hxx"

STRING_ENUM
(
    class MyEnum : unsigned long long, MyEnumInfo,

    (Enumerator1, 7),
    (Enumerator2, 89),
    (Enumerator3)
)

#include <iostream>

int main()
{
	std::cout << MyEnumInfo::toString( MyEnumInfo::fromString("Enumerator1").first ) << '\n'
	          << MyEnumInfo::toString( MyEnumInfo::fromString("Enumerator2").first ) << '\n'
	          << (int)MyEnumInfo::fromString("Enumerator3").first ;
}
