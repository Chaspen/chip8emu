#include <bitset>
#include <iostream>


using namespace std;
void init()
{
    //program counter
    std::bitset<16> pc;
    //stack pointer
    std::bitset<8> sp;
    /*
    example, set first bit to 1:
    addr[0] = 1;
    */
    
    pc[0] = 1;
    //test
    std::cout << pc << std::endl;
}


int main() {
    init();

}