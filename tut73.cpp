#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // Map is an associative array
    map<string, int> marksMap;
    marksMap["Ijtiba"] = 58;
    marksMap["Soliheen"] = 57;
    marksMap["Faraz"] = 78;
    marksMap["Irfan"] = 65;
    marksMap["Haris"] = 53;

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    return 0;
}
