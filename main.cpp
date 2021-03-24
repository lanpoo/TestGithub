#include <vector>
#include <iostream>
#include <set>
using namespace std;


class Student{
public:
    
};
int main()
{
    cout << "i have changed my project:" << endl;
    set<testDemo> s1;
    testDemo t1(1, "wjh");
    s1.insert(t1);
    cout << "emplace:" << endl;
    set<testDemo> s2;
    s2.emplace(2, "wjh");
    return 0;
}