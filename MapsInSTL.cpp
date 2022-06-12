#include <iostream>
#include <iterator>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,40));
    m1.insert(pair<int, int>(2, 30));
    m1.insert(pair<int, int>(3, 60));
    m1.insert(pair<int, int>(4, 20));
    m1.insert(pair<int, int>(5, 50));
    m1.insert(pair<int, int>(6, 50));
    m1.insert(pair<int, int>(7, 10));
    
    map<int, int>::iterator itr;
    cout<<"The Map m1 is"<<endl;
    cout << "\tKEY\tELEMENT\n";
    for (itr = m1.begin(); itr != m1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
    return 0;
}