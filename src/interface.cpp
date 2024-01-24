#include "interface.h"

CommandBuffer* new_command_buffer() {
    CommandBuffer* command_buffer = (CommandBuffer*)malloc(sizeof(CommandBuffer));

    command_buffer -> command = NULL;
    command_buffer -> command_length = 0;
    command_buffer -> input_length = 0;

    return command_buffer;
}

void print_insomniadb_prompt() {
    std::cout << "insomniadb > ";
}

void read_input(CommandBuffer* command_buffer) {
    ssize_t nBytes = getline(&(command_buffer -> command), &(command_buffer -> command_length), stdin);
    if (nBytes<=0) {
        std::cout << "Error: read_input has gone wrong.";
        exit(EXIT_FAILURE);
    }
    command_buffer->input_length = nBytes - 1;
    command_buffer->command[nBytes - 1] = 0;
}