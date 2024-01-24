#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure of input buffer
typedef struct {
    char* command;
    size_t command_length;
    ssize_t input_length;
} CommandBuffer;

CommandBuffer* new_command_buffer();
void print_insomniadb_prompt();
void read_input(CommandBuffer* command_buffer);

#endif