#pragma once


#ifdef BLACKBOXTESTLIBRARY_EXPORTS

#define BLACKBOXTEST_API __declspec(dllexport)

#else
#define BLACKBOXTEST_API __declspec(dllimport)

#endif

extern "C"
{
	BLACKBOXTEST_API bool Prime(int n);

}