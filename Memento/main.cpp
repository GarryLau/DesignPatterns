#include "Command.h"
#include "Number.h"

Command * Command::m_command_list[];
Memento * Command::m_mem_list[];
int Command::m_num_commands = 0;
int Command::m_high_water = 0;


int main() {
    Number obj(10);

    Command *command[3];
    command[1] = new Command(&obj, &Number::doDouble);
    command[2] = new Command(&obj, &Number::doHalf);

    std::cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
    int i = 0;
    std::cin >> i;
    while (i) {
        if (3 == i) {
            Command::unDo();
        }
        else if (4 == i) {
            Command::reDo();
        }
        else if(1 == i || 2 == i){
            command[i]->execute();
        }
        else {
            std::cout << "Invalid operation." << std::endl;
        }
        obj.showValue();
        std::cin >> i;
    }

    return 0;
}