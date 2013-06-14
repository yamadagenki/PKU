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
    int p,e,i,d;
    int index = 1;
    while (1) {
        cin >> p >> e >> i >> d;
        if (p==-1&&e&&-1&&i==-1&&d==-1) {
            break;
        }
        int num = (d>1?d:1);
        while (1) {
            if ((num-p)%23==0
                && (num-e)%28==0
                && (num-i)%33==0
                ) {
                break;
            }
            num++;
        }
        
        printf("Case %d: the next triple peak occurs in %d days.\n",index,num-d);
        index++;
    }
    return 0;
}


