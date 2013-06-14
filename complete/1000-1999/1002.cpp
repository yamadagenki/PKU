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

string getNumber(char c){
    switch (c) {
        case '1':
            return "1";
        case '2':
        case 'A':
        case 'B':
        case 'C':
            return "2";
        case '3':
        case 'D':
        case 'E':
        case 'F':
            return "3";
        case '4':
        case 'G':
        case 'H':
        case 'I':
            return "4";
        case '5':
        case 'J':
        case 'K':
        case 'L':
            return "5";
        case '6':
        case 'M':
        case 'N':
        case 'O':
            return "6";
        case '7':
        case 'P':
        case 'R':
        case 'S':
            return "7";
        case '8':
        case 'T':
        case 'U':
        case 'V':
            return "8";
        case '9':
        case 'W':
        case 'X':
        case 'Y':
            return "9";
        case '0':
            return "0";
        default:
            return "";
    }
}
string intToString(int a){
    stringstream ss;
    ss << a;
    return ss.str();
}

int stringToInt(string s){
    istrstream istr(s.data());
    int i;
    istr >>i;
    return i;
}

int main(int argc, const char * argv[])
{
    
    int l;
    cin >> l;
    map<string, int> tel;
    for (int i=0; i<l; ++i) {
        string tmp;
        string convert="";
        cin >> tmp;
        for (int j=0; j<(int)tmp.size(); ++j) {
            convert += getNumber(tmp[j]);
        }
        if (!tel.count(convert)) {
            tel[convert] = 1;
        }else{
            tel[convert] += 1;
        }
        
    }
    bool atom = true;
    map<string, int>::iterator it = tel.begin();
 	while( it != tel.end())
	{
        if ((*it).second!=1) {
            printf("%s-%s %d\n"
                   ,(*it).first.substr(0,3).c_str()
                   ,(*it).first.substr(3,6).c_str()
                   ,(*it).second);
            atom = false;
        }
        
		++it;
	}
    if (atom) {
        cout << "No duplicates." << endl;
        return 0;
    }
    return 0;
}


