// SampleDll.cpp : Defines the exported functions for the DLL.
//

#include "SampleDll.h"


// This is an example of an exported variable
SAMPLEDLL_API int nSampleDll=0;

// This is an example of an exported function.
SAMPLEDLL_API int fnSampleDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CSampleDll::CSampleDll()
{
    return;
}
