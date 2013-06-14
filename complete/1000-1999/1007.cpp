//
//  main.cpp
//  TopCoderSample
//
//  Created by XuShengbo on 2013/04/19.
//  Copyright (c) 2013年 XuShengbo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <stack>
#include <cstdio>
#include <queue>
#include <sstream>
#include <strstream>
#include "math.h"

using namespace std;

int countSotingNum(string s){
    int total = 0;
    for (int i=0; i<(int)s.size(); ++i) {
        for (int j=i; j<(int)s.size(); ++j) {
            if (s[i]>s[j]) {
                total++;
            }
        }
    }
    
    return total;
}

int main(int argc, const char * argv[])
{
    int n,m;
    cin >> n >> m;
    vector<pair<int, string>> ans;
    for (int i=0; i<m; ++i) {
        string tmp;
        cin >> tmp;
        ans.push_back(pair<int, string>(countSotingNum(tmp),tmp));
    }
    sort(ans.begin(), ans.end());
    for (int i=0; i<(int)ans.size(); ++i) {
        cout << ans[i].second << endl;
    }
    return 0;
}


