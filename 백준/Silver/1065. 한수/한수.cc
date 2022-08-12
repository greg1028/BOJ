#include<iostream>
using namespace std;
int main(){
    int n, a,b,c,count=0;
    cin>>n;
    
    if(n <100)
        cout<<n;
    
    else if(n>=100){
        
        for(int i = 100; i<=n; i++){
            a=i/100;
            b=i%100/10;
            c=i%10;
            if(a-b==b-c)
                count++;
            }
           
            cout<<count+99;
}
        
    
}