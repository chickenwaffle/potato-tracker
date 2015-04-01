#ifndef POTATO_H
#define POTATO_H
#include <string>
#include <vector>

class Potato {
private:
    std::string name;
    int id, height, width;
    float x, y;
    int heatIntensity;
    bool hot;

public:
    static int nextID;
    static std::vector<Potato*> potatoes;

    Potato():
        name("JimBob"),
        height(20), width(20),
        x(50), y(50),
        heatIntensity(9001),
        hot(true) {
        id = ++nextID;
    }

    Potato(std::string _name,
           int _height, int _width,
           float _x, float _y,
           int _heatIntensity,
           bool _hot
           ):
        name(_name),
        height(_height), width(_width),
        x(_x), y(_y),
        heatIntensity(_heatIntensity),
        hot(_hot) {
        id = ++nextID;
    }

    std::string toString();
};

#endif // POTATO_H
