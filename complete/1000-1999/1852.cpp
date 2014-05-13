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
    int n;
    cin >> n;
    
    for (int i=0; i<n; ++i) {
        int l, ants;
        cin >> l >> ants;
        
        vector<int> position;
        
        int tmp;
        
        for (int k=0; k<ants; ++k) {
            cin >> tmp;
            position.push_back(tmp);
        }
        
        int earlist=0, latest=0;

        for (int k=0; k<ants; ++k) {
            earlist = max(earlist, min(position[k], l-position[k]));
            latest = max(latest, max(position[k], l-position[k]));
        }
        cout << earlist << " " << latest << endl;
    }
    
    
    return 0;
    
}
