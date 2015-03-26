#include "potato.h"

std::string Potato::status() {
    std::string s = "POTATO ID: " + name + "\nPosition:\t" + std::to_string(x) + "," + std::to_string(y) + "\nDimensions:\t" + std::to_string(width) \
            + "x" + std::to_string(height) + "\nHeat Intensity:\t" + std::to_string(heatIntensity) + "\nHot?\t\t" + ((hot)?"yes":"no") + "\n\n";
    return s;
}
