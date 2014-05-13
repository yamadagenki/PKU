//
//  main.cpp
//  PKUCoding
//
//  Created by XuShengbo on 2014/05/14.
//  Copyright (c) 2014年 XuShengbo. All rights reserved.
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


int main()
{
    double vs, r, c;
    int n;
    cin >> vs >> r >> c >> n;
    
    
    for (int i=0; i<n; ++i) {
        double w;
        cin >> w;
        
        printf("%.3f\n",c*r*w*vs/ sqrt(1+c*c*r*r*w*w));
    }
    return 0;
    
}
