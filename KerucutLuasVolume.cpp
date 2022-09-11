#include <iostream>
using namespace std;
int main(){
    int r,t,s;
    cin>>r>>t>>s;
    float phi=3.14,luas;
    double v,v1;
    
	v1=phi*r*r*t;
    v=v1/3;
    
    luas=3.14*r*s;
    
    cout<<v<<endl<<luas;
    
    
    return 0;
}
