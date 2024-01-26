#include "parser.h"

Parser::Parser(char* buffer) {
    buffer = buffer;
    command_type = strtok(buffer, " ");
    command_body = buffer;
}
char* Parser::get_command_type() {
    return command_type;
}

char* Parser::get_command_body() {
    return command_body;
}