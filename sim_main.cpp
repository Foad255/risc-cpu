#include "VSingleCycleCPU.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VSingleCycleCPU *cpu = new VSingleCycleCPU;

    cpu->Clk = 0;
    cpu->Rst = 1;
    cpu->eval();

    // Reset
    for (int i = 0; i < 4; i++) {
        cpu->Clk ^= 1;
        cpu->eval();
    }

    cpu->Rst = 0;

    // Run cycles
    for (int cycle = 0; cycle < 50; cycle++) {
        cpu->Clk = 0;
        cpu->eval();

        cpu->Clk = 1;
        cpu->eval();

        std::cout << "Cycle " << cycle
                  << " PC=" << std::hex << cpu->PC_dbg
                  << std::dec << std::endl;
    }

    delete cpu;
    return 0;
}

