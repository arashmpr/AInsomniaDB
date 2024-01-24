#include <interface.h>

int main(int argc, char* argv[]) {
  CommandBuffer* command_buffer = new_command_buffer();
  while (true) {
    print_insomniadb_prompt();
    read_input(command_buffer);

    if (strcmp(command_buffer->command, ".exit") == 0) {
    //   close_input_buffer(input_buffer);
      exit(EXIT_SUCCESS);
    } else {
      printf("Unrecognized command '%s'.\n", command_buffer->command);
    }
  }
}