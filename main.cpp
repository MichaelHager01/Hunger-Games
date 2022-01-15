#include <iostream>
#include "functions.h"
#include <unistd.h>

using namespace std;

int main() {
    bool selection = introduction();                                // Checking if user wants to play
    if (!selection) {
        cout << "\n";
        cout << "Maybe next time!" << "\n"; 
        cout << "\n";
        return 0;
    }

    Tribute user = character_selection();                           // User picks valid tribute
    while (user.get_na() == "default") { 
        cout << "\nSorry, wrong selection. Please try again:\n";
        user = character_selection();
     }

    if (!character_preview(user)) {                                 // Second validation to start the game
        cout << "\n";
        cout << "Maybe next time!" << "\n"; 
        cout << "\n";
        return 0;
    }

    entrance(user);                                                 // Hunger Games Begin!

    return 0;
}

