//Source Code for the file

#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Welcome to Rock, Paper and Scissors" << endl;
    int lb = 0, ub = 2;

    //Code to generate a random integer between 1 and 3
    srand(time(0));
    int rnd = (rand() % 3) + 1;

    //Vector storing the choices
    vector<string> v = {"","R", "P", "S"};

    //User input
    string user;
    cout << "Enter your choice:(R, P and S) ";
    cin >> user;

    //Game Logic
    if(user == "R" && v[rnd] == "S") {
        cout << "Computer's choice: " << v[rnd] << endl;
        cout << "You Win!" << endl;
    } else if(user == "P" && v[rnd] == "R") {
        cout << "Computer's choice: " << v[rnd] << endl;
        cout << "You Win!" << endl;
    } else if(user == "S" && v[rnd] == "P") {
        cout << "Computer's choice: " << v[rnd] << endl;
        cout << "You Win!" << endl;
    } else if(user == v[rnd]) {
        cout << "Computer's choice: " << v[rnd] << endl;
        cout << "It's a Tie!" << endl;
    } else {
        cout << "Computer's choice: " << v[rnd] << endl;
        cout << "You Lose!" << endl;
    }
}