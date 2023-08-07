#include <iostream>
using namespace std;

int main() {
    int user = 0;
    int cpu = 0;
    
    cout << "ROCK PAPER SCISSORS SHOOT" << endl;
    cout << "1) ROCK" << endl;
    cout << "2) PAPER" << endl;
    cout << "3) SCISSORS" << endl;
    cin >> user;

    if (user == 1) {
        cout << "You choose ROCK" << endl;
    } else if (user == 2) {
        cout << "You choose PAPER" << endl;
    } else {
        cout << "You choose SCISSORS" << endl;
    }

    cpu = rand() % 3 + 1;
    if (cpu == 1) {
        cout << "CPU choose ROCK" << endl;
    } else if (cpu == 2) {
        cout << "CPU choose PAPER" << endl;
    } else {
        cout << "CPU choose SCISSORS" << endl;
    }

    // result
    if (user == cpu) {
        cout << "It's a tie" << endl;
    } else if (user == 1) {
        if (cpu == 2) {
            cout << "You LOSE" << endl;   // Rock is covered by paper
        } else if (cpu == 3) {
            cout << "YOU WIN" << endl;    // Rock breaks scissors
        }
    } else if (user == 2) {
        if (cpu == 1) {
            cout << "YOU WIN" << endl;    // Paper covers rock
        } else if (cpu == 3) {
            cout << "YOU LOSE" << endl;   // Scissors cut paper
        }
    } else if (user == 3) {
        if (cpu == 1) {
            cout << "YOU LOSE" << endl;   // Rock breaks scissors
        } else if (cpu == 2) {
            cout << "YOU WIN" << endl;    // Scissors cut paper
        }
    }

    return 0;
}
