//
// Created by Keith Lancaster on 2/20/21.
//

#include "Person.h"

#include <utility>

// note that move is used here. reference call is fine, since we
// have not covered move
Person::Person(std::string name, int heartRate) : name(std::move(name)), heart(heartRate) {}

Person::~Person() {}


const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}


bool Person::isHealthy() {
    return stomach.statusCheck();
}

void Person::punch() {
    stomach.gotHit();
}

bool Person::heartOK() const {
    return heart.ok();
}


