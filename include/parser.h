#ifndef PARSER_H
#define PARSER_H

#include "utility.h"

class Parser {
    public:
        Parser(char* buffer);

        char* get_command_type();
        char* get_command_body();

    private:
        char* buffer;
        char* command_type;
        char* command_body;
};

#endif