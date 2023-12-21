
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

int toGrayScaleAverage(int r, int g, int b)
{
    // TODO: test this, it may be wrong!
    return (r + g + b) / 3;
}

// Defination of min(); function

int min(int a, int b, int c)
{

    if (a <= b && a <= c)
    {
        return a;
    }

    else if (b <= a && b <= c)
    {
        return b;
    }

    return c;
}

// Defination of toGrayScaleLightness(); function

float toGrayScaleLightness(int red, int green, int blue)
{

    float grey_scale_value = (max(red, green, blue) + min(red, green, blue)) / 2;

    return grey_scale_value;
}

// Defination of toGrayScaleLuminosity(); function

float toGrayScaleLuminosity(int red, int green, int blue)
{

    float grey_scale_value = (0.21 * red) + (0.72 * green) + (0.07 * blue);

    return grey_scale_value;
}

// Defination of toSepiaRed(); function

float toSepiaRed(int red, int green, int blue)
{

    float sepia_red = (0.393 * red) + (0.769 * green) + (0.189 * blue);

    return sepia_red;
}

// Defination of toSepiaGreen(); function

float toSepiaGreen(int red, int green, int blue)
{

    float sepia_green = (0.349 * red) + (0.686 * green) + (0.168 * blue);

    return sepia_green;
}

// Defination of toSepiaBlue(); function

float toSepiaBlue(int red, int green, int blue)
{

    float sepia_blue = (0.272 * red) + (0.534 * green) + (0.131 * blue);

    return sepia_blue;
}