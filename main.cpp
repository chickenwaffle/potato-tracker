#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <potato.h>
#include <command.h>
using namespace std;

const std::string LOGO = R"(
         _______  _______  _______  _______  _______  _______
        |       ||       ||       ||   _   ||       ||       |
        |    _  ||   _   ||_     _||  |_|  ||_     _||   _   |
        |   |_| ||  | |  |  |   |  |       |  |   |  |  | |  |
        |    ___||  |_|  |  |   |  |       |  |   |  |  |_|  |
        |   |    |       |  |   |  |   _   |  |   |  |       |
        |___|    |_______|  |___|  |__| |__|  |___|  |_______|
                 _______  _______  ______    __   __
                |       ||   _   ||    _ |  |  |_|  |
                |    ___||  |_|  ||   | ||  |       |
                |   |___ |       ||   |_||_ |       |
                |    ___||       ||    __  ||       |
                |   |    |   _   ||   |  | || ||_|| |
                |___|    |__| |__||___|  |_||_|   |_|


)";

// COMMANDS
Command *doAdd(stringstream& ss) {
    string name = "";
    int height = 0, width = 0;
    float x = 0, y = 0;
    int heatIntensity = 0;

    ss >> name;
    ss >> height;
    ss >> width;
    ss >> x;
    ss >> y;
    ss >> heatIntensity;

    return new AddCommand(name, height, width, x, y, heatIntensity);
}

void doPrint() {
    for(Potato* potato: Potato::potatoes) {
        cout << potato->toString();
    }
}

void doHelpMsg() {
    cout << "You forgot to code the help message. Idiot.\n";
}

string getCommand()
{
    string cmdLine;

    cout << "> ";
    getline(cin, cmdLine);
    return cmdLine;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));


    /*
    potato = new Potato("George", 640, 480, 1, 1, 9001, true);
    Potato::potatoes.push_back(potato);

    potato = new Potato("Gregg",  640, 480, 1, 1, 9001, true);
    Potato::potatoes.push_back(potato);


    */

    cout << LOGO;

    string cmdLine = getCommand();

    while (cin && cmdLine.find("qu") != 0 ) {
        stringstream ss(cmdLine);

        Command *wcmd = NULL;
        string cmd;
        ss >> cmd;

        if      (cmd.find("ad") == 0) { wcmd = doAdd(ss);     } // add potato
        //else if (cmd.find("mo") == 0) { wcmd = doModify(ss);  } // modify potato
        //else if (cmd.find("de") == 0) { wcmd = doDestroy(ss); } // destroy potato
        else if (cmd.find("pr") == 0) { doPrint();            } // print potato details
        else                          { doHelpMsg();          }

        if (wcmd != NULL) {
            wcmd->execute();
        }

        cmdLine = getCommand();
    }



    for(Potato* potato: Potato::potatoes) {
        delete potato;
    }
    Potato::potatoes.clear();

    return 0;
}

