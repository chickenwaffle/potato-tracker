#include "command.h"

bool AddCommand::execute() {

    Potato *potato = NULL;
    if (name == "")
    {
        potato = new Potato();
    }
    else if (name != "" && width == 0) {
        potato = new Potato(name);
    }
    else if (name != "" && width > 0) {
        potato = new Potato(name, height, width, x, y, heatIntensity);
    }

    if (potato != NULL) {
        Potato::potatoes.push_back(potato);
        std::cout << "\t-> successfully added potato #" << std::to_string(id) << ": " << name << "\n\n";
        return true;
    }
    else {
        std::cerr << "\t** failed to add potato\n\n";
        Potato::nextID--;
        return false;
    }
}
