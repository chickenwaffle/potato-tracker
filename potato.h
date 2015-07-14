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
        name("JimBob")
    {
        id = ++nextID;
        height = rand()%20+1;
        width = rand()%20+1;
        x = rand()%100+1;
        y = rand()%100+1;
        heatIntensity = rand()%300+1;
        hot = (heatIntensity > 100) ? true : false;
    }

    Potato(std::string _name):
        name(_name)
    {
        id = ++nextID;
        height = rand()%20+1;
        width = rand()%20+1;
        x = rand()%100+1;
        y = rand()%100+1;
        heatIntensity = rand()%300+1;
        hot = (heatIntensity > 100) ? true : false;
    }

    Potato (std::string _name,
           int _height, int _width,
           float _x, float _y,
           int _heatIntensity):
        name(_name),
        height(_height), width(_width),
        x(_x), y(_y),
        heatIntensity(_heatIntensity)
    {
        id = ++nextID;
        hot = (_heatIntensity > 100) ? true : false;
    }

    std::string toString();

    Potato getByID(int id);
};

#endif // POTATO_H
