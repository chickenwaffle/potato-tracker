#include <iostream>
#include <potato.h>
using namespace std;


int main() {
    Potato *potato = new Potato();
    Potato::potatoes.push_back(potato);

    potato = new Potato("George", 640, 480, 1, 1, 9001, true);
    Potato::potatoes.push_back(potato);

    potato = new Potato("Gregg",  640, 480, 1, 1, 9001, true);
    Potato::potatoes.push_back(potato);

    for(Potato* potato: Potato::potatoes) {
        cout << potato->toString();
    }

    for(Potato* potato: Potato::potatoes) {
        delete potato;
    }
    Potato::potatoes.clear();

    return 0;
}

