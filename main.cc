#include <iostream>
#include <vector>
#include <string>
#include "hello/lib.h"

using namespace std;

int main()
{
    vector<string> arr = tools::split("hllo", "ll");
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    auto s = tools::join(arr, ",");
    cout << s << endl;
    // cout << GetStaticText() << endl;
    return 0;
}