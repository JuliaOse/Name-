#include <iostream>
#include <string>
using namespace std;
int main() {
        string name;
        cout<<"What is your name? \n";
        getline(cin, name);
        cout<<"Welcome, " + name;

    return 0;
}
