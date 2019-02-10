#include <iostream>
#include <bits/stdc++.h>

using namespace std;


//The function returns an iterator which points to the element which is searched in the set container. If the element is not found, then the iterator points to the position just after the last element in the set

int main()
{
    set<int> myset;
    myset.insert(20);
    myset.insert(40);
    myset.insert(10);
    myset.insert(5);

    auto pos = myset.find(45);   
    cout<<"value = "<<*pos<<endl;

    for(pos ; pos !=myset.end();pos++)
        cout<<"value = "<<*pos<<endl;

    return 0;

}

