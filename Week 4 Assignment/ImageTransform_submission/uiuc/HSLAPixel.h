
/*
You need to create a class called HSLAPixel within the uiuc namespace in the file uiuc/HSLAPixel.h. Each
pixel should contain four public member variables:
• h, storing the hue of the pixel in degrees between 0 and 360 using a double
• s, storing the saturation of the pixel as a decimal value between 0.0 and 1.0 using a double
• l, storing the luminance of the pixel as a decimal value between 0.0 and 1.0 using a double
• a, storing the alpha channel (blending opacity) as a decimal value between 0.0 and 1.0 using a double
Page 4 / 11
That's it! Once you have this simple class, you are ready to compile and test Part 1 of this assignment.
*/

#pragma once
#include <iostream>
#include <sstream>

namespace uiuc {
    class HSLAPixel {
      public: 
        double h;
        double s; 
        double l; 
        double a; 

    };
}
