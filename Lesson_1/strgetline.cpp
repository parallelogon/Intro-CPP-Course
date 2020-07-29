/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>

using namespace std;

int main()
{
    string user1name;
    string user1street;
    string user1phone;
    cout << "What is your name?\n";
    getline(cin, user1name);
    cout << "What is your address?\n";
    getline(cin, user1street);
    cout << "What is your Phone Number?\n";
    getline(cin, user1phone);
    string user2name;
    string user2street;
    string user2phone;
    cout << "What is your name?\n";
    getline(cin, user2name);
    cout << "What is your address?\n";
    getline(cin, user2street);
    cout << "What is your Phone Number?\n";
    getline(cin, user2phone);    
    cout << user1name << "\n" << "\t" << user1street <<"\n" << "\t" << user1phone << endl;
    cout << user2name << "\n" << "\t" << user2street <<"\n" << "\t" << user2phone << endl;
    return 0;
}

