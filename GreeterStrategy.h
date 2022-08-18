#ifndef GREETERSTRATEGY
#define GREETERSTRATEGY_H

#include "DoorGreeterApp.h"

class GreeterStrategy {
private:
    GreeterFactory gf;
    bool _runflag = true;

public:
    GreeterStrategy() {
        while (_runflag) {
            std::string input = PrintGreeterStrategyMenu();

            if (VerifyInput(input)) {
                HandleMenuInput(input);
            }
            else {
                std::cout << "Invalid Input provided.\n";
            }
        }
    }

    std::string PrintGreeterStrategyMenu() {
        std::string input;

        std::cout << "\n";
        std::cout << "Greeter Strategy Selection Menu:\n";
        std::cout << "1) Greeter Factory\n";
        std::cout << "2) Door Greeter Factory\n";
        std::cout << "3) Exit\n";;
        
        std::cin >> input;
        return input;
    }

    bool VerifyInput(std::string input) {
        if (input == "1" || input == "2" || input == "3") {
            return true;
        }
        else {
            return false;
        }
    }

    void HandleMenuInput(std::string input) {
        if (input == "1"){
            GreeterApp ga = GreeterApp(&gf);
        }
        else if (input == "2") {
            DoorGreeterApp dga = DoorGreeterApp(&gf);
        }
        else if (input == "3"){
            _runflag = false;
        }
    }
};

#endif