#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// This is Jagdish
int main()
{
    set<int> myset;
    myset.insert(10);
    myset.insert(20);
    myset.insert(700);
    myset.insert(50);
    myset.insert(20);
    myset.insert(30);

    cout<<"size of set = "<<myset.size()<<endl;

    for(set<int>::iterator it = myset.begin();it !=myset.end();it++)
        cout<<"value = "<<*it<<endl;

    return 0;
}

