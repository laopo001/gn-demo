// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <vector>
#include <string>
#include "lib.h"
// #include <iostream>

using namespace std;

const char *GetStaticText()
{
  return "Hello World";
}

namespace hello
{

  vector<string> split(string s, string seprate)
  {
    vector<string> result;
    int seprate_len = seprate.length();
    int start = 0;
    int index;
    while ((index = s.find(seprate, start)) != string::npos)
    {
      result.push_back(s.substr(start, index - start));
      start = index + seprate_len;
      // cout << "1" << endl;
    }
    if (start <= s.length())
    {
      result.push_back(s.substr(start, s.length() - start));
    }
    return result;
  }

  string join(vector<string> arr, string seprate)
  {
    if (arr.size() == 0)
    {
      return "";
    }
    string s = arr[0];
    for (size_t i = 1; i < arr.size(); i++)
    {
      s += seprate + arr[i];
    }
    return s;
  }
}
