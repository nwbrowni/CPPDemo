#ifndef GREETERAPP
#define GREETERAPP_H

#include "GreeterFactory.h"

class GreeterApp {
private:
    GreeterFactory *_gf;
    Greeter _g;
    bool _runflag = true;

public:
    GreeterApp(GreeterFactory *gf) {
        _gf = gf;
        
        while (_runflag) {
            std::string input = PrintGreeterMenu();

            if (VerifyInput(input)) {
                HandleMenuInput(input);
            }
            else {
                std::cout << "Invalid Input provided.\n";
            }
        }
    }

    ~GreeterApp() {
        delete _gf;
        delete &_g;
        delete &_runflag;
    }

    std::string PrintGreeterMenu() {
        std::string input;

        std::cout << "\n";
        std::cout << "Greeter Menu:\n";
        std::cout << "1) Greeter Greet\n";
        std::cout << "2) Default\n";
        std::cout << "3) Midwesterner\n";
        std::cout << "4) Italian\n";
        std::cout << "5) Spanish\n";
        std::cout << "6) Formal\n";
        std::cout << "7) Custom\n";
        std::cout << "8) Exit\n";
        
        std::cin >> input;
        return input;
    }

    bool VerifyInput(std::string input) {
        if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7" || input == "8") {
            return true;
        }
        else {
            return false;
        }
    }

    void HandleMenuInput(std::string input) {
        if (input == "1"){
            _g.Greet();
        }
        else if (input == "2") {
            _g = _gf->BuildGreeter();
        }
        else if (input == "3") {
            _g = _gf->BuildGreeter("Midwesterner");
        }
        else if (input == "4") {
            _g = _gf->BuildGreeter("Italian");
        }
        else if (input == "5") {
            _g = _gf->BuildGreeter("Spanish");
        }
        else if (input == "6") {
            _g = _gf->BuildGreeter("Formal");
        }
        else if (input == "7") {
            std::string greeting;
            
            std::cout << "Please enter a greeting:\n";
            std::cin >> greeting;
            _g = _gf->BuildCustomGreeter(greeting);
        }
        else if (input == "8"){
            _runflag = false;
        }
    }
};

#endif