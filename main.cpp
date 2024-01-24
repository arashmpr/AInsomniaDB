#include <interface.h>
#include <command_handler.h>

int main(int argc, char* argv[]) {
  CommandBuffer* command_buffer = new_command_buffer();
  while (true) {
    print_insomniadb_prompt();
    read_input(command_buffer);

    char* command_type = parse_command_type(command_buffer->command);
    if (strcmp(command_type, EXIT) == 0) {
        exit(EXIT_SUCCESS);
    } else if (strcmp(command_type, HELP) == 0) {
        std::cout << "Error: Right now we don't have any help. sorry." << std::endl;
    } else {
        printf("Unrecognized command '%s'.\n", command_buffer->command);
    }
  }
}