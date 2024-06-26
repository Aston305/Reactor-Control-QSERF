using namespace std;
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

int main()
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    system("cls");
    sleep_for(seconds(2));
    cout << "Welcome to your first day as the QSERF chief engineer." << endl << endl;
    sleep_for(seconds(2));
    cout << "Your username is 'JohnSmith' and your password is 'engineer'." << endl << endl;
    sleep_for(seconds(2));
    cout << "Good luck." << endl << endl;
    sleep_for(seconds(2));
    string loginU;
    string loginP;
    while(loginU != "JohnSmith" or loginP != "engineer") {
        cout << "Username: ";
        cin >> loginU;
        cout << endl;
        cout << "Password: ";
        cin >> loginP;
        cout << endl;
        if(loginU == "JohnSmith" and loginP == "engineer") {
            break;
        }
        sleep_for(seconds(1));
        cout << "Incorrect username or password. Please try again." << endl << endl;
        sleep_for(seconds(1));
    }
    sleep_for(seconds(1));
    cout << "Access granted. Standby...";
    sleep_for(seconds(3));
    system("cls");
    sleep_for(seconds(1));
    int a;
    cin >> a;
    return 0;
}