#include <string>
#include <iostream>
#include "person.h"
#include "stomach.h"
#include "heart.h"


    std::string name;
    Stomach stomach;
    Heart heart;

    Person::Person(const std::string &name, int heartRate) : name(name) {
        heart.setRate(heartRate);
        std::cout << "person constructor" << std::endl;
    }

    Person::~Person() {
        std::cout << "person destructor" << std::endl;
    }

    const std::string &Person::getName() const {
        return name;
    }

    void Person::setName(const std::string &name) {
        Person::name = name;
    }

    bool Person::isHealthy(){
        return stomach.statusCheck();
    }

    bool Person::heartOk(){
        return heart.ok();
    }

    void Person::punch() {
        stomach.gotHit();
    }
