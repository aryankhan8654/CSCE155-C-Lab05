#include <stdio.h>
#include <math.h>

// Scales the given rgb integer component (on the
// scale [0, 255]) to a floating point number on the
// scale [0, 1].
//
// Note: this function is only included to demonstrate
// how to unit test floating point values. See the
// colorUtilsTester.c for more.
double rgbIntToFloat(int c)
{
    return (double)c / 255.0;
}

// Returns the maximum value among the three
// given integer values.
int max(int x, int y, int z)
{
    return x > y ? (x > z ? x : z) : (y > z ? y : z);
}

// Returns a gray-scaled RGB value of the three
// given RGB values using the average technique.
//
int toGrayScaleAverage(int r, int g, int b)
{
    int avg = (r + g + b) / 3;
    return avg << 16 | avg << 8 | avg;
}

int main()
{
    int r = 255, g = 128, b = 64;
    printf("Gray-scaled RGB: %06X\n", toGrayScaleAverage(r, g, b));
    return 0;
}