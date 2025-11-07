/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"

int main() {
    std::cout << "=== Transformers Demo ===" << std::endl;

    Autobot optimus("Optimus Prime", 10);
    Decepticon megatron("Megatron", 9);
    Neutral ratchet("Ratchet", 5);

    optimus.setAlly(&megatron);

    optimus.move();
    optimus.transform();
    optimus.fire();

    megatron.attack();
    megatron.sabotage();

    ratchet.mediate();
    ratchet.observe();

    std::cout << "\n--- End of Demo ---" << std::endl;

    return 0;
}
