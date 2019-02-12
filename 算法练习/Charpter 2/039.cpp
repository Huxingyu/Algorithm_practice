#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char a[10];
    cin.getline(a,10);
    cout<<a<<endl;
    cout<<"wocao"<<"\n";
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<3.1415926<<endl;
    return 0;
}