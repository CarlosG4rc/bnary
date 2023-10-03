#include <iostream>
#include <list>

using namespace std;

int main()
{
    int n, i;
    list<int> mod{};
    cout << "Write the number to change to binary: ";
    cin >> n;
    
    for(n; n != 0; n /= 2){
        i = n%2;
        mod.push_front(i);
    }
    for(int val : mod){
        cout << val;
    }
}