//
// Created by Keith Lancaster on 2/20/21.
//

#ifndef CODE_PERSON_H
#define CODE_PERSON_H

#include <iostream>
#include "stomach.h"
#include "Heart.h"

class Person {
private:

    std::string name;
    Stomach stomach;
    Heart heart;
public:
    const Stomach &getStomach() const;

    void setStomach(const Stomach &stomach);

public:
    Person(std::string name, int heartRate);
    virtual ~Person();

    const std::string &getName() const;

    void setName(const std::string &name);

    bool isHealthy();

    void punch();

    bool heartOK() const;
};

#endif //CODE_PERSON_H
