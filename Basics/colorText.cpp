#include<iostream>
using namespace std;

int main(){
    
        cout << "\033[32m[OK]\033[0m Process completed successfully.\n";
        cout << "\033[31m[ERROR]\033[0m File not found.\n";
        cout << "\033[33m[WARNING]\033[0m Low memory.\n";

        cout << endl;

        cout << "\033[30m Black Text \033[0m" << endl;      // Red
        cout << "\033[31mRed Text033[0m" << endl;      // Red
        cout << "\033[32mGreen Text\033[0m" << endl;    // Green
        cout << "\033[33mYellow Text\033[0m" << endl;   // Yellow
        cout << "\033[34mBlue Text\033[0m" << endl;     // Blue
        cout << "\033[35mMagenta Text\033[0m" << endl;  // Magenta
        cout << "\033[36mCyan Text\033[0m" << endl;     // Cyan
        cout << "\033[37mWhite Text\033[0m" << endl;    // White

        cout << "\033[1;31mBold Red\033[0m" << endl;    // Bold Red
        cout << "\033[4;32mUnderlined Green\033[0m" << endl; // Underlined Green
        cout << "\033[4;32mArman\033[0m \033[31mHossen \033[34mRipon\033[0m";

        // "\033[0m"   // reset (disable all formatting)

        cout << "Now this is normal text again." << endl;
        cout << "\033[9;31mDeleted Item\033[0m" << endl;

        // end of the text colored, use '\033[0m' 
        // ✅ \033[0m is the "neutral" or "reset" command for text color and formatting.



    return 0;
}


// | Color        | Code | Example    |
// | ------------ | ---- | ---------- |
// | Black        | `30` | `\033[30m` |
// | Red          | `31` | `\033[31m` |
// | Green        | `32` | `\033[32m` |
// | Yellow       | `33` | `\033[33m` |
// | Blue         | `34` | `\033[34m` |
// | Magenta      | `35` | `\033[35m` |
// | Cyan         | `36` | `\033[36m` |
// | White        | `37` | `\033[37m` |
// | Bright Red   | `91` | `\033[91m` |
// | Bright Green | `92` | `\033[92m` |
