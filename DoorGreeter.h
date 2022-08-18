#ifndef DOORGREETER
#define DOORGREETER_H

#include "Greeter.h"

class DoorGreeter : public Greeter {
public:
    DoorGreeter() 
        : Greeter()
    {

    }

    DoorGreeter(std::string greeting)
        : Greeter(greeting)
    {
        
    }

    void WelcomeIn() {
        std::cout << "Please come in.\n";
    }

    void Greet() {
        WelcomeIn();
        Greeter::Greet();
    }

    void GreetWithName(std::string name) {
        WelcomeIn();
        Greeter::GreetWithName(name);
    }

    void GreetWithName() {
        WelcomeIn();
        Greeter::GreetWithName();
    }
};

#endif