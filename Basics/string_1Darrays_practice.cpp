#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    cout << "string arrray:\n";
    string names[] = {"Arman", "Hossen", "Ripon"};
    cout << names[0] << '\n'
         << names[1] << '\n'
         << names[2] << endl;
    names[0] = "Ibrahim";
    cout << '\n'
         << names[0] << endl; // names[0] value or data changes
    cout << "------------------------------------\n";
    
    cout << "char array:\n";
    char alf[] = {'A', 'R', 'M', 'A', 'N'};
    int size = sizeof(alf) / sizeof(char);
    for (int i = 0; i < size; i++)
    {
        cout << alf[i];
    }
    cout << endl;
    cout << "------------------------------------\n";
    
    cout << "int array:\n";
    int ids[] = {101, 202, 303, 404, 505, 606};
    int size__of_ids = sizeof(ids) / sizeof(int);
    for (int j = 1; j < size__of_ids; j++)
    {
        cout << ids[j] << '\n';
    }
    cout << "------------------------------------\n";

    cout<< "double array:" << endl;
    double price[3] = {20.01, 30.4, 39.003} ;
    for(int j = 0; j < 3 ; j++){
        cout << price[j] << endl; 
    }
        // dosomik er por je koi ghor ase oi koi tai print hobe,
        /*
        20.01
        30.4
        39.003
        */ 

       //limit the decimal 
       //#include <iomanip> // For std::fixed and std::setprecision
    double pri[3] = {20.01, 30.4, 39.003};
    for(int k = 0; k < 3; k++) {
        cout << fixed << setprecision(4) << pri[k] << endl;
    }
    return 0;


    /*
    Taking Input for Strings
1. Using std::cin (Stops at a space)

    #include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string (single word): ";
    cin >> str;  // Input stops at space
    cout << "You entered: " << str << endl;
    return 0;
}
    */


/*2. Using std::getline (Reads a full line)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string (multiple words): ";
    getline(cin, str);  // Reads until newline
    cout << "You entered: " << str << endl;
    return 0;
}
*/


/*
3. Using char array for C-style Strings

#include <iostream>
#include <cstring>  // For C-style string functions
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string (up to 100 characters): ";
    cin.getline(str, 100);  // Reads a line into a char array
    cout << "You entered: " << str << endl;
    return 0;
}
*/


/*
4. Using Loops to Read Strings
a. Reading multiple strings into a vector:

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    string word;
    cout << "Enter multiple words (type 'end' to stop):" << endl;

    while (cin >> word) {
        if (word == "end") break;
        words.push_back(word);
    }

    cout << "You entered: ";
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}
*/

//b. Reading multiple lines:
/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> lines;
    string line;
    cout << "Enter multiple lines (press Ctrl+D or Ctrl+Z to end):" << endl;

    while (getline(cin, line)) {
        lines.push_back(line);
    }

    cout << "You entered:" << endl;
    for (const auto& l : lines) {
        cout << l << endl;
    }
    return 0;
}
*/

// Using std::string with Dynamic Concatenation
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;  // Reads two separate strings
    string combined = str1 + " " + str2;  // Concatenates strings
    cout << "Combined string: " << combined << endl;
    return 0;
}
*/

/*
String Manipulation Examples
a. Convert to Uppercase:

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Uppercase: " << str << endl;
    return 0;
}


b. Find Substring:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, world!";
    string sub = "world";

    size_t pos = str.find(sub);  // Find substring
    if (pos != string::npos) {
        cout << "Found '" << sub << "' at position: " << pos << endl;
    } else {
        cout << "'" << sub << "' not found" << endl;
    }
    return 0;
}

*/
}