#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 100
#define BEST_GAME_IN_THE_WORLD "roblox"

void input(char buffer[MAX_STRING_SIZE])
{
    // warning, I don't like how it use MAX_STRING_SIZE instead of the actual string.
    fgets(buffer, MAX_STRING_SIZE, stdin);
    buffer[strlen(buffer) - 1] = '\0'; // remove the end of string new line to null terminator or end of line idk
}

void change_input_to_roblox(char buffer[MAX_STRING_SIZE])
{
    char roblox_string[] = "roblox";
    strcpy(buffer, roblox_string);
}

int main()
{
    char buffer[MAX_STRING_SIZE];

    printf("what is the best game in the world?: ");
    input(buffer);

    if(strcmp(buffer, BEST_GAME_IN_THE_WORLD) != 0)
    {
        change_input_to_roblox(buffer);
    }

    printf("%s\n", buffer);
    return 0;
}
