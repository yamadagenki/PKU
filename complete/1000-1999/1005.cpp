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
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        double x,y;
        double r;
        cin >> x >> y;
        int year=1;
        while (1) {
            r = sqrt((50.0*(double)year)*2/PI);
            if (r> sqrt(x*x+y*y)) {
                break;
            }
            year++;
        }
        
        printf("Property %d: This property will begin eroding in year %d.\n",i+1,year);
    }
    
    cout << "END OF OUTPUT." << endl;
    return 0;
}


