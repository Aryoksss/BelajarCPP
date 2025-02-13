#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    const vector<string> msg = {"Cpp", "is", "fun", "and", "easy", "to", "learn"};

    for (const auto& word : msg)
    {
        cout << word << '\n';
    }

    return 0;
}

