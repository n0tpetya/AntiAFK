#include <windows.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    const int W = 0x57;
    const int A = 0x41;
    const int S = 0x53;
    const int D = 0x44;
    const int E = 0x45;

    const int R = 0x52;
    const int KEYEVENTF_KEYDOWN = 0x0000; // New definition

    int l{};
    int f{};
    int time = 0;
    int owntime;
    int pp;
    int timeown;
    char option{};
    string website{};
    string gobackoption;
 
    system("Color 0b");

    cout << R"(  ___        _   _    ___   __ _    
 / _ \      | | (_)  / _ \ / _| |   
/ /_\ \_ __ | |_ _  / /_\ \ |_| | __
|  _  | '_ \| __| | |  _  |  _| |/ /
| | | | | | | |_| | | | | | | |   < 
\_| |_/_| |_|\__|_| \_| |_/_| |_|\_\
                                    
                                    )" << endl;

    cout << "For Anti Afk(a) for Webefresher(b)" << endl;
    cin >> option;

    if (option == 'a') {
        cout << "to start the programm choose the time you're afk!\n";
        cout << "[1] 10min\n";
        cout << "[2] 15min\n";
        cout << "[3] 20min\n";
        cout << "[4] 30min\n";
        cout << "[5] own time\n";
        cin >> l;
    }

    if (l == 1) {
        cout << "\nYou have 1 minute to tab in your game!\n\n";
        while (time < 10)
        {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(W, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(W, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(A, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(A, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(S, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(S, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(D, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(D, 0, KEYEVENTF_KEYUP, 0);
            time++;
            cout << "pass: " << time << "min" << endl;
        }
    }

    if (l == 2) {
        cout << "\nYou have 1 minute to tab in your game!\n\n";
        while (time < 15)
        {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(W, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(W, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(A, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(A, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(S, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(S, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(D, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(D, 0, KEYEVENTF_KEYUP, 0);
            time++;
            cout << "pass: " << time << "min" << endl;
        }
    }

    if (l == 3) {
        cout << "\nYou have 1 minute to tab in your game!\n\n";
        while (time < 20)
        {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(W, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(W, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(A, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(A, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(S, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(S, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(D, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(D, 0, KEYEVENTF_KEYUP, 0);
            time++;
            cout << "pass: " << time << "min" << endl;
        }
    }

    if (l == 4) {
        cout << "\nYou have 1 minute to tab in your game!\n\n";
        while (time < 30)
        {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(W, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(W, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(A, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(A, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(S, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(S, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(D, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(D, 0, KEYEVENTF_KEYUP, 0);
            time++;
            cout << "pass: " << time << "min" << endl;
        }
    }

    if (l == 5) {
        cout << "please enter the time in minutes: ";
        cin >> owntime;
        cout << "\nYou have 1 minute to tab in your game!\n\n";
        while (time < owntime) 
        {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(W, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(W, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(A, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(A, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(S, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(S, 0, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            keybd_event(D, 0, KEYEVENTF_KEYDOWN, 0);
            Sleep(500);
            keybd_event(D, 0, KEYEVENTF_KEYUP, 0);
            time++;
            cout << "pass: " << time << "min" << endl;
        }
    }

    if (option == 'b') {
        cout << "to start the programm choose the time you want to refresh the website\n";
        cout << "[1] 10min\n";
        cout << "[2] 15min\n";
        cout << "[3] 20min\n";
        cout << "[4] 30min\n";
        cout << "[5] Own time\n";
        cin >> f;
    }

    if (f == 1) {
        cout << "Enter Website link to refresh: ";
        cin >> website;
        cout << "you have 1 minute left before the window opens!\n";
        ShellExecuteA(NULL, "open", website.c_str(), NULL, NULL, SW_SHOWDEFAULT);
        while (time <= 10) {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
            cout << "refreshed\n";
            time++;
        }
    }

    if (f == 2) {
        cout << "Enter Website link to refresh: ";
        cin >> website;
        cout << "you have 1 minute left before the window opens!\n";
        ShellExecuteA(NULL, "open", website.c_str(), NULL, NULL, SW_SHOWDEFAULT);
        while (time <= 15) {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
            cout << "refreshed\n";
            time++;
        }
    }

    if (f == 3) {
        cout << "Enter Website link to refresh: ";
        cin >> website;
        cout << "you have 1 minute left before the window opens!\n";
        ShellExecuteA(NULL, "open", website.c_str(), NULL, NULL, SW_SHOWDEFAULT);
        while (time <= 20) {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
            cout << "refreshed\n";
            time++;
        }
    }

    if (f == 4) {
        cout << "Enter Website link to refresh: ";
        cin >> website;
        cout << "you have 1 minute left before the window opens!\n";
        ShellExecuteA(NULL, "open", website.c_str(), NULL, NULL, SW_SHOWDEFAULT);
        while (time <= 30) {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
            cout << "refreshed\n";
            time++;
        }
    }

    if (f == 5) {
        cout << "Enter the Refresh time: ";
        cin >> timeown;
        cout << "Enter Website link to refresh: ";
        cin >> website;
        cout << "you have 1 minute left before the window opens!\n";
        ShellExecuteA(NULL, "open", website.c_str(), NULL, NULL, SW_SHOWDEFAULT);
        while (time == timeown) {
            Sleep(60000);
            const int KEYEVENT_KEYUP = 0x02;
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYDOWN, 0);
            keybd_event(R, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
            cout << "refreshed\n";
            time++;
        }
    }
    return 0;
}