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

int charToInt(char s){
    return s - '0';
}
void arrangeKeta(string& a, string& b){
    int a1 = (int)a.size();
    int b1 = (int)b.size();
    
    if (a.size()==b.size()) {
        return;
    }else if (a1>b1) {
        for (int i=0; i<a1-b1; ++i) {
            b = "0"+b;
        }
    }else{
        for (int i=0; i<b1-a1; ++i) {
            a = "0"+a;
        }
    }
}

string mult(string a, string b){
    int scale = (int)a.size()-1;
    string ans = "";
    int k = 0;
    int ue = 0;
    do{
        ue += charToInt(a[scale-k])*stringToInt(b);
        ans = intToString(ue%10) + ans;
        ue /= 10;
        k++;
    
    }while (k<a.size());

    while (0<ue){
        ans = intToString(ue%10) + ans;
        ue /=10;
        
    }
    return ans;
}

int main(int argc, const char * argv[])
{
    string r,a;
    int n;
        while (cin >> r >> n) {
            
            string number;
            string integer;
            string floating="0";
    
            if (r.find(".")==string::npos) {
                number = r;
            }else{
                integer = r.substr(0,r.find("."));
                floating = r.substr(r.find(".")+1);
                number = integer + floating;
            }
            if(n==0){ cout << 1 << endl; continue;}
            if(number=="00000"){ cout << 0 << endl; continue;}

            string tmp="1";
            
            for (int i=0; i<n; ++i) {
                tmp = mult(tmp, number);
            }
            
            
            
            int t = (int)tmp.size();
            
            if (floating.size()*n>tmp.size())
            for (int i=0; i<floating.size()*n-t; ++i) {
                tmp = "0"+ tmp;
            }
            
            if (floating!="0") {
                if ((int)tmp.size() - (int)floating.size()*n>0) {
                    tmp.insert(tmp.size() - floating.size()*n, ".");
                }else{
                    tmp.insert(0, ".");
                }
            }
            
            t = (int)tmp.size()-1;
            for (int i=0; i<t; ++i) {
                if (tmp[t-i]=='0') {
                    tmp.erase(t-i);
                }else{
                    break;
                }
            }
            
            cout << tmp << endl;
            
        }
    return 0;
}


