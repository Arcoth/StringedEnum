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
	constexpr auto s1 = MyEnumInfo::toString( MyEnumInfo::fromString("Enumerator1").first ),
	               s2 = MyEnumInfo::toString( MyEnumInfo::fromString("Enumerator2").first );
	constexpr auto i = MyEnumInfo::fromString("Enumerator3").first;
	std::cout << s1 << '\n' << s2 << '\n' << (int)i;
}
