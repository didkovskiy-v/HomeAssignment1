/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"
#include <iostream>

int main() {
    Autobot optimus("Optimus Prime", 10, 150, 50, 30, "Autobot High Command", true);
    Decepticon megatron("Megatron", 10, 180, 45, 35, true, "Tank");
    Neutral ratchet("Ratchet", 8, 120, 30, 20, "None", false);

    optimus.SetAlly(&ratchet);
    megatron.SetAlly(nullptr);
    ratchet.SetAlly(&optimus);

    std::cout << "Battle simulation setup complete." << std::endl;
    return 0;
}
