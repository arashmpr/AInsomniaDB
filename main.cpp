#include <parser.h>
#include <utility.h>
#include <config.h>

int main(int argc, char* argv[]) {

    std::cout << "InsomniaDB Version " << InsomniaDB_VERSION_MAJOR << "." << InsomniaDB_VERSION_MINOR << std::endl;
    printf("Type 'help', 'copyright', 'credits' or license' for more information.\n");

    while (true) {
        printf("insomnia >> ");

        char buffer[BUFFER_SIZE];
        std::cin >> buffer;

        Parser* parser = new Parser(buffer);
        char* command_type = parser->get_command_type();
        if (strcmp(command_type, EXIT) == 0) {
            exit(EXIT_SUCCESS);
        } else if (strcmp(command_type, HELP) == 0) {
            std::cout << "Error: Right now we don't have any help. sorry." << std::endl;
        } else {
            printf("Unrecognized command '%s'.\n", command_type);
        }
    }
}