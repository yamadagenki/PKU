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
#include <stdlib.h>

using namespace std;

string getDigital (string x) {
    long long int total = 0;
    stringstream ss;
    for (int i=0; i < x.size(); ++i) {
        char tmp = x[i];
        total += tmp - 48;
    }
    ss << total;
    return ss.str();
}

int main() {
    string input;
    while (true) {
        cin >> input;
        if (input.compare("0") == 0) {
            break;
        }
        while (true) {
            stringstream ss;
            input = getDigital(input);
            ss << input;
            int d;
            ss >> d;
            if (d < 10) {
                cout << d << endl;
                break;
            }
        }
    }
    return 0;
}
