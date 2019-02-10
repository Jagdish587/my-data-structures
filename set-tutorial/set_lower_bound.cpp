#include <iostream>
#include <set>

using namespace std;

int main () {
   std::set<int> myset;
   std::set<int>::iterator itlow,itup;

   for (int i = 1; i < 10; i++) myset.insert(i*10);

   std::cout << "myset contains:";
     for (std::set<int>::iterator it = myset.begin(); it!=myset.end(); ++it)
        std::cout << ' ' << *it;
     std::cout << '\n';

   itlow = myset.lower_bound (300);

   cout<<"value = "<<*itlow<<endl;

   return 0;

}

