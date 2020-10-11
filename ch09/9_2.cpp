#include <iostream>
#include <string>
using namespace std；
void strcount(const std::string str);

int main(void)
{
    
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while(input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): " << endl;
        getline(cin, input);
    }
    cout << "Bye" << endl;

    return 0;
}

void strcount(const std::string str)
{
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains " << endl;
    cout << str.size() << "characters" << endl;
    total += str.size();
    cout << total << " characters total" << endl;
}
