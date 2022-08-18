#ifndef GREETERFACTORY
#define GREETERFACTORY_H

#include "DoorGreeter.h"

class GreeterFactory {
public:
    Greeter BuildGreeter() {
        return Greeter("Hello");
    }

    void BuildGreeter(Greeter *g) {
        *g = Greeter("Hello");
    }

    Greeter BuildGreeter(std::string id) {
        if (id == "Midwesterner") {
            return Greeter("Howdy");
        }
        else if (id == "Italian") {
            return Greeter("Chow");
        }
        else if (id == "Spanish") {
            return Greeter("Hola");
        }
        else if (id == "Formal") {
            return Greeter("Good day");
        }
        else {
            return BuildGreeter();
        }
    }

    void BuildGreeter(Greeter *g, std::string id) {
        if (id == "Midwesterner") {
            *g = Greeter("Howdy");
        }
        else if (id == "Italian") {
            *g = Greeter("Chow");
        }
        else if (id == "Spanish") {
            *g = Greeter("Hola");
        }
        else if (id == "Formal") {
            *g = Greeter("Good day");
        }
        else {
            *g = BuildGreeter();
        }
    }

    Greeter BuildCustomGreeter(std::string greeting) {
        return Greeter(greeting);
    }

    void BuildCustomGreeter(Greeter *g, std::string greeting) {
        *g = Greeter(greeting);
    }

    DoorGreeter BuildDoorGreeter() {
        return DoorGreeter("Hello");
    }

    void BuildDoorGreeter(DoorGreeter *dg) {
        *dg = DoorGreeter("Hello");
    }

    DoorGreeter BuildDoorGreeter(std::string id) {
        if (id == "Midwesterner") {
            return DoorGreeter("Howdy");
        }
        else if (id == "Italian") {
            return DoorGreeter("Chow");
        }
        else if (id == "Spanish") {
            return DoorGreeter("Hola");
        }
        else if (id == "Formal") {
            return DoorGreeter("Good day");
        }
        else {
            return BuildDoorGreeter();
        }
    }

    void BuildDoorGreeter(DoorGreeter *dg, std::string id) {
        if (id == "Midwesterner") {
            *dg = DoorGreeter("Howdy");
        }
        else if (id == "Italian") {
            *dg = DoorGreeter("Chow");
        }
        else if (id == "Spanish") {
            *dg = DoorGreeter("Hola");
        }
        else if (id == "Formal") {
            *dg = DoorGreeter("Good day");
        }
        else {
            *dg = BuildDoorGreeter();
        }
    }

    DoorGreeter BuildCustomDoorGreeter(std::string greeting) {
        return DoorGreeter(greeting);
    }

    void BuildCustomDoorGreeter(DoorGreeter *dg, std::string greeting) {
        *dg = DoorGreeter(greeting);
    }
};

#endif