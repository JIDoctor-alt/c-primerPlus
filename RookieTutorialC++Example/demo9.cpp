#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    cout<<a<<" ";
    if(a % 2){
        cout<<"奇数"<<endl;
    }else{
        cout<<"偶数"<<endl;
    }

    cout<<(a % 2 ? "a 为奇数\n" : "a 为偶数\n");
    (a%2) ? cout<<a<<" 为奇数\n" : cout<<a<<" 为偶数\n";
    return 0;
}