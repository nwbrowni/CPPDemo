#ifndef GREETER
#define GREETER_H

#include <iostream>
#include <string>

class Greeter {
protected:
    std::string _greeting;

public:
    void SetGreeting(std::string greeting) {
        _greeting = greeting;
    }

    std::string GetGreeting() {
        return _greeting;
    }

    Greeter() {
        _greeting = "Hello";
    }

    Greeter(std::string greeting) {
        _greeting = greeting;
    }

    ~Greeter() {
        delete &_greeting;
    }

    void Greet() {
        std::cout << _greeting + "!\n";
    }

    void GreetWithName(std::string name) {
        std::cout << _greeting + ", " + name + "!\n";
    }

    void GreetWithName() {
        std::string name = GetName();
        GreetWithName(name);
    }

    std::string GetName() {
        std::string name;
        std::cout << "What is your name?\n";
        std::cin >> name;
        return name;
    }
};

#endif