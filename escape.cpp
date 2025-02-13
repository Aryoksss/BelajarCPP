#include <iostream>
#include <string>

using namespace std;

void showMenu1() {
    cout << "\nChoose your path:\n";
    cout << "1. Enter The Mysterious Door\n";
    cout << "2. Search for The Hidden Key\n";
    cout << "3. Examine The Ancient Scroll\n";
    cout << "4. Follow the Strange Light\n";
    cout << "5. Climb the Forgotten Stairs\n";
}

void showMenu2() {
    cout << "\nWhat will you do next?\n";
    cout << "1. Investigate the surroundings\n";
    cout << "2. Look for hidden messages\n";
    cout << "3. Call for help\n";
    cout << "4. Use an item from your bag\n";
    cout << "5. Move forward bravely\n";
}

void showMenu3() {
    cout << "\nA final challenge awaits! Choose wisely:\n";
    cout << "1. Solve the ancient riddle\n";
    cout << "2. Confront the guardian\n";
    cout << "3. Look for another solution\n";
    cout << "4. Trust your instincts\n";
    cout << "5. Turn back\n";
}

bool checkFlag(int choice1, int choice2, int choice3) {
    return (choice1 == 3 && choice2 == 2 && choice3 == 4);
}

int main() {
    int choice1, choice2, choice3;
    
    cout << "\n********** Welcome to the CTF Challenge **********\n";
    cout << "To unlock the flag, navigate correctly!\n\n";
    
    showMenu1();
    cout << "Enter your choice: ";
    cin >> choice1;
    
    if (choice1 < 1 || choice1 > 5) {
        cout << "\nInvalid choice! Try again.\n";
        return 0;
    }
    
    showMenu2();
    cout << "Enter your choice: ";
    cin >> choice2;
    
    if (choice2 < 1 || choice2 > 5) {
        cout << "\nInvalid choice! Try again.\n";
        return 0;
    }
    
    showMenu3();
    cout << "Enter your choice: ";
    cin >> choice3;
    
    if (choice3 < 1 || choice3 > 5) {
        cout << "\nInvalid choice! Try again.\n";
        return 0;
    }
    
    if (checkFlag(choice1, choice2, choice3)) {
        cout << "\n Congratulations! Here is your flag: CTF{keren_ban9et_luh7_ban9} \n";
    } else {
        cout << "\n Salah, kamu tuh gimana sih\n";
    }
    
    return 0;
}
