#ifndef person_code
#define person_code

#include <string>
#include <iostream>


class Person {
    std::string name;
public:
    Person(const std::string &name, int heartRate);

    virtual ~Person();

    const std::string &getName() const;

    void setName(const std::string &name);

    bool isHealthy();

    bool heartOk();

    void punch();
};

#endif