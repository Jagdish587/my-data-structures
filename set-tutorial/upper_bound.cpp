#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    // Function to insert elements
    // in the set container
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    s.insert(20);
    s.insert(15);

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 2 is present
    // points to next element after 2
    auto it = s.upper_bound(2);
    cout << "\nThe upper bound of key 2 is ";
    cout << (*it) << endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*it) << endl;

    it = s.upper_bound(100);
    cout << "The upper bound of key 100 is ";
    cout << (*it) << endl;

    it = s.upper_bound(19);
    cout << "The upper bound of key 19 is ";
    cout << (*it) << endl;

    it = s.upper_bound(20);
    cout << "The upper bound of key 20 is ";
    cout << (*it) << endl;

    it = s.upper_bound(0);
    cout << "The upper bound of key 0 is ";
    cout << (*it) << endl;

    return 0;
}

