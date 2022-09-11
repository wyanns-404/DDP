#include <iostream>
using namespace std;
int main(){
    int d;
    cin>>d;
    float j,m;
    
    j = d /(60*60);
    d = d-((60*60)*j);
    m = d / 60;
    d = d -(60*m);
    
    cout<<j<<" ";
    cout<<m<<" ";
    cout<<d;
    
    
    
    return 0;
}
