#include <iostream>
#include "person.h"

int main() {
    Person bountyGuy("Greef Karga", 60);
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    bountyGuy.punch();
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    std::cout << bountyGuy.getName() << "'s heart is " << (bountyGuy.heartOk() ? "ok" : "beating slow") << std::endl;
    return 0;
}
