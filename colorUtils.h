
#include "colorUtils.h"

double rgbIntToFloat(int c)
{
    return (c / 255.0);
}

int max(int x, int y, int z)
{
    int m = x > y ? x : y;
    m = m > z ? m : z;
    return m;
}
