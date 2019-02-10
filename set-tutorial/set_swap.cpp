#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Take any two sets 
    set<int> set1{ 1, 2, 3, 4 }; 
    set<int> set2{ 5, 6, 7, 8 }; 
  
    // Swap elements of sets 
    set1.swap(set2); 
  
    // Print the first set 
    cout << "set1 = "; 
    for (auto it = set1.begin(); 
         it != set1.end(); ++it) 
        cout << ' ' << *it; 
  
    // Print the second set 
    cout << endl 
         << "set2 = "; 
    for (auto it = set2.begin(); 
         it != set2.end(); ++it) 
        cout << ' ' << *it; 
  
    return 0; 
} 
