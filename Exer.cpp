#include <iostream>
using namespace std;
struct Time
{
    int hour;
    int minute;
    int second;
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    void start_read()
    {
        cout << "set start hour: ";
        cin >> hour; 
        cout << "set start minute: ";
        cin >> minute;
        cout << "set start second: ";
        cin >> second;
    }
    void end_read()
    {
        cout << "set end hour: ";
        cin >> hour;
        cout << "set end minute: ";
        cin >> minute;
        cout << "set end second: ";
        cin >> second;
    }
    void diff(Time a, Time b) {
        hour = b.hour - a.hour;
        minute = b.minute - a.minute;
        second = b.second - a.second;
    }
    void print()
    {
        cout << "hour: " << hour << endl;
        cout << "minute: " << minute << endl;
        cout << "second: " << second << endl;
    }
    void summation(Time dur);
};
void Time::summation(Time dur)
{
    hour += dur.hour;
    minute += dur.minute;
    second += dur.second;
}
struct Event
{
    char title[128];
    char organizer[128];
    Time start_time;
    Time end_time;
    Time duration;
    void read()
    {
        cin.getline(title, 128);
        cin.getline(organizer, 128);
    }
    void get_duration()
    {
        start_time.start_read();
        end_time.end_read();
        duration.diff(start_time, end_time);
    }
};
int main()
{
    int n;
    Event p[64];
    Time sum;
    cout << "Insert count of events: ";
    cin >> n;
    cin.ignore();
    if (n > 64)return 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "'s: event info:\n";
        p[i].get_duration();
        sum.summation(p[i].duration);
    }
    cout << "The total events duration is:\n";
    cout << sum.hour << " hours, " << sum.minute << " minutes and " << sum.second << " seconds!\n";
    return 0;
}
