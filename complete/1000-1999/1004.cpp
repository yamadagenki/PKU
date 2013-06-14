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


int main(int argc, const char * argv[])
{
    double average = 0;

    for (int i=0; i<12; ++i) {
        double tmp;
        cin >> tmp;
        average +=tmp;
    }
    average /= 12.0;
    cout <<"$" << average << endl;
    return 0;
}


