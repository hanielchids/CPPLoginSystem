#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isLoggedIn()
{
    string username, password, uname, pword;

    cout<< "Enter username: ";
    cin>> username;

    cout<<"Enter password: ";
    cin>> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, uname);
    getline(read, pword);

    if(uname == username && pword == password)
    {
        return true;
    } else{
        return false;
    }
}