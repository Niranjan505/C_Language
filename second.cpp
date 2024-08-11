#include <iostream>
using namespace std;

class TimeConverter 
{
public:
    void secondsToHHMMSS(int totalSeconds) 
    {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS => " << hours << ":" 
             << (minutes < 10 ? "0" : "") << minutes << ":" 
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    int hhmmssToSeconds(int hours, int minutes, int seconds) 
    {
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};

int main()
{
    TimeConverter converter;
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Convert seconds to HH:MM:SS\n";
    cout << "2. Convert HH:MM:SS to seconds\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
        converter.secondsToHHMMSS(totalSeconds);
    } 
       else if (choice == 2) 
    {
        int hours, minutes, seconds;
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        int totalSeconds = converter.hhmmssToSeconds(hours, minutes, seconds);
        cout << "Total seconds: " << totalSeconds << endl;
    }
     else 
    {
        cout << "Invalid choice!" << endl;
    }

}
