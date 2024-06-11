//Source Code for the file

#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Welcome to Rock, Paper and Scissors" << endl;

    //Vector storing the choices
    vector<string> v = {"","R", "P", "S"};

    //Game Logic
    int n = 5;
    int user_score = 0;
    int cmp_score = 0;

    srand(time(0));

    while(n--) {
        //Code to generate random integer between 1 and 3
        int rnd = (rand() % 3)+1;

        //Taking the user input
        string user;
        cout << "Enter your choice:(R, P and S) ";
        cin >> user;

        //Checking the winner
        if(user == "R" && v[rnd] == "S") {
            cout << "Computer's choice: " << v[rnd] << endl;
            cout << "You Win!" << endl;
            user_score++;
        } else if(user == "P" && v[rnd] == "R") {
            cout << "Computer's choice: " << v[rnd] << endl;
            cout << "You Win!" << endl;
            user_score++;
        } else if(user == "S" && v[rnd] == "P") {
            cout << "Computer's choice: " << v[rnd] << endl;
            cout << "You Win!" << endl;
            user_score++;
        } else if(user == v[rnd]) {
            cout << "Computer's choice: " << v[rnd] << endl;
            cout << "It's a Tie!" << endl;
        } else {
            cout << "Computer's choice: " << v[rnd] << endl;
            cout << "You Lose!" << endl;
            cmp_score++;
        }
    }

    cout << endl << endl;
    //Displaying the final score
    cout << "User's Score: " << user_score << endl;
    cout << "Computer's Score: " << cmp_score << endl;
    if(user_score > cmp_score) {
        cout << "You Win the Game!" << endl;
    } else if(user_score < cmp_score) {
        cout << "Computer Wins the Game!" << endl;
    } else {
        cout << "It's a Tie!" << endl;
    }
}