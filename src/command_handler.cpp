#include <command_handler.h>


char* parse_command_type(char* command) {
    return strtok(command, " ");
}