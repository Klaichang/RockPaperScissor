#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

int main() {
    int choice;
    srand(time(0)); // Seed the random number generator
    int random = rand() % 3; // Generate a number between 0 and 2

    cout << "-*- - - - - - - - - - - - - - - - - - - - - -*-\n";
    cout << "       Welcome to Rock, Paper, Scissors         \n";
    cout << "-*- - - - - - - - - - - - - - - - - - - - - -*-\n";
    cout << endl;

    cout << "Select your options below. \n[1]Rock \n[2]Paper \n[3]Scissors\n> ";
    cin >> choice;

    if (choice < 1 || choice > 3) {
        cout << "Incorrect Input, Please Enter a value between 1-3\n";
    } else if (choice == 1) {
        if (random == 0) {
            cout << "You: Rock | Computer: Rock \nTie, Again!\n";
        } else if (random == 1) {
            cout << "You: Rock | Computer: Paper \nYou lost!\n";
        } else {
            cout << "You: Rock | Computer: Scissors\nYou won!\n";
        }
    } else if (choice == 2) {
        if (random == 0) {
            cout << "You: Paper | Computer: Rock \nYou won!\n";
        } else if (random == 1) {
            cout << "You: Paper | Computer: Paper \nTie, Again!\n";
        } else {
            cout << "You: Paper | Computer: Scissors\nYou lost!\n";
        }
    } else if (choice == 3) {
        if (random == 0) {
            cout << "You: Scissors | Computer: Rock \nYou lost!\n";
        } else if (random == 1) {
            cout << "You: Scissors | Computer: Paper \nYou won!\n";
        } else {
            cout << "You: Scissors | Computer: Scissors\nTie, Again!\n";
        }
    }

    return 0;
}
