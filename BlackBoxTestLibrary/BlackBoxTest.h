#pragma once


#ifdef BLACKBOXTESTLIBRARY_EXPORTS

#define BLACKBOXTEST_API __declspec(dllexport)

#else
#define BLACKBOXTEST_API __declspec(dllimport)

#endif

extern "C"
{
	BLACKBOXTEST_API bool Prime(int n);
	BLACKBOXTEST_API int RectangleArea(int bredth, int length);
	BLACKBOXTEST_API int SumDigits(int n);
	BLACKBOXTEST_API bool Palindrome(int n);
	BLACKBOXTEST_API float CircleArea(float radius);
}
