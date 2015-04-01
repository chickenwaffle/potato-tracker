#include "potato.h"
using std::to_string;

// STATICS
int Potato::nextID = 0;
std::vector<Potato*> Potato::potatoes;

std::string Potato::toString() {
    std::string s = "POTATO ID: " + to_string(id) + "\nAlias:\t" + name + "\nPosition:\t" + to_string(x) + "," + to_string(y) \
            + "\nDimensions:\t" + to_string(width) + "x" + to_string(height) \
            + "\nHeat Intensity:\t" + to_string(heatIntensity) + "\nHot?\t\t" + ((hot)?"yes":"no") + "\n\n";
    return s;
}
