#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <sstream>
#include <string>
#include <potato.h>

class Command
{
public:
    virtual bool execute() = 0;
    virtual ~Command() {  }
};

class AddCommand : public Command
{
    std::string name;
    int id, height, width;
    float x, y;
    int heatIntensity;

public:
    AddCommand(std::string _name, int _height, int _width, float _x, float _y, int _heatIntensity):
        name(_name), height(_height), width(_width), x(_x), y(_y), heatIntensity(_heatIntensity)
    {

    }

    bool execute();
};

#endif // COMMAND_H
