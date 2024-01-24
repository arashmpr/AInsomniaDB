#ifndef COMMAND_HANDLER_H
#define COMMAND_HANDLER_H

#include <cstring>

#define HELP "help"
#define EXIT "exit"
#define CREATE "create"
#define INSERT "insert"
#define UPDATE "update"
#define DELETE "delete"

char* parse_command_type(char* command);

#endif