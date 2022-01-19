#include <iostream>
#include <vector>
#include <string>
#include "hello/lib.h"

using namespace std;

int main()
{
    vector<string> arr = hello::split("hllo", "ll");
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    auto s = hello::join(arr, ",");
    cout << s << endl;
    cout << ("GetStaticText()xxx") << endl;
    return 0;
}