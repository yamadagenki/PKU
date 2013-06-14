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
    double c;
    while (cin >> c) {
        if (c<0.01) break;
        double len = 0.0;
        int count = 1;
        
        while (len<c) {
            len += 1.0/((double)count+1.0);
            count++;
        }
        printf("%d card(s)\n",count-1);
    }
    return 0;
}


