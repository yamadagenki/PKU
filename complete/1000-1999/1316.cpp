//
//  main.cpp
//  PKUCoding
//
//  Created by XuShengbo on 2015/04/05.
//  Copyright (c) 2015年 XuShengbo. All rights reserved.
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


#define MAX_NUM 10000

using namespace std;

int funcD (int x) {
    int input = x;
    vector<int> parts;
    int res = 0;
    while (0 < x) {
        parts.push_back(x%10);
        x /= 10;
    }

    for (int i=0 ; i < parts.size(); ++i) {
        res += parts[i];
    }
    return input + res;
}

vector<int> getTotalArray(void) {
    vector<int> res;
    for(int i=0; i <= MAX_NUM ; ++i){
        res.push_back(i);
    }
    return res;
}

int main() {
    vector<int> base;
    base = getTotalArray();

    vector<int> answer;
    int x;
    for (int i = 0; i <= MAX_NUM; ++i) {
        x = funcD(i);
        if (x < MAX_NUM) {
            base[x] = 0;
        }
    }

    for (int i = 0; i < MAX_NUM; ++i) {
        if (base[i] == 0) {
            continue;
        }
        cout << base[i] << endl;
    }
    
    return 0;
}
