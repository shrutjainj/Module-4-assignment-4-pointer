#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int *ptrp = &a;
    int *ptrf = &b;
    cout<<(*ptrp) * (*ptrf);
    return 0;
}