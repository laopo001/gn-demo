// #define SION_DISABLE_SSL

#include <iostream>
#include <vector>
#include <string>
#include "hello/lib.h"
#include "sion/sion.h"
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

    auto resp = sion::Fetch("https://www.baidu.com/");
    cout << resp.Body() << endl;
    cout << resp.HeaderValue("content-type") << endl;
    cout << ("GetStaticText()xxx") << endl;

    return 0;
}