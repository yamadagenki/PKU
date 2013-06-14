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
#define PI 3.14159265258979
using namespace std;


int main(int argc, const char * argv[])
{
    string haab[] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
    string tzolkin[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    int n;
    cin >> n;
    cout << n << endl;
    for (int i=0; i<n; ++i) {
        string month;
        int day,year;
        cin >> day;
		cin >> month;
		cin >> month;
		cin >> year;
        int ans_dayNum,ans_year;
        
        int tmp=0;
        int k = 0;
        while (1) {
            if (haab[k]==month) {
                break;
            }
            ++k;
        }
        
        tmp = 20*k + day;
        ans_year = (year*365+tmp)/260;
        ans_dayNum = (year*365+tmp)%13+1;
        string ans_dayStr = tzolkin[(year*365+tmp)%20];
        cout << ans_dayNum << " " << ans_dayStr << " " << ans_year << endl;
    }
     return 0;
}


