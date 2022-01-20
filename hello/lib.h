// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


#include <vector>
#include <string>
using namespace std;
const char *GetStaticText();
namespace hello
{
    vector<string> split(string s, string seprate);
    string join(vector<string> arr, string seprate);
}