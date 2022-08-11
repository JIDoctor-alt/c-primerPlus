#include<iostream>
int main()
{
    using namespace std;
    int higgns = 5;
    int * pt = &higgns;

    cout<<"Value of higgens = "<<higgns
        <<"; Address of higgens = "<<&higgns<<endl;
    cout<<"Value of *pt = "<<*pt
        <<"; Value of pt = "<<pt<<endl;
    return 0;
}