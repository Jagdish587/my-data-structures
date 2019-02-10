#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> myset;
    myset.insert(20);
    myset.insert(40);
    myset.insert(30);
    myset.insert(60);

    if(myset.count(40))
        cout<<"element 40 is present in set "<<endl;
    else
        cout<<"element 40 not present in list\n ";


    if(myset.count(80))
        cout<<"element 80 is present in set "<<endl;
    else
        cout<<"element 80 not present in list\n ";



}


