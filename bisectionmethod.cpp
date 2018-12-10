#include<bits/stdc++.h>
using namespace std;
double e=0.000001;
double f(double x){
    return x*x*x-x-1;
}
int main(){
    double a,b,c;
    cout<<"Enter the value of a&b";

    while(cin>>a>>b){
        if(f(a)*f(b)<=0) break;
    }

    while(abs(b-a)>=e){
         c=(a+b)/2;

         if(f(c)==0.0) break;
         else if(f(a)*f(c)<0){
            b=c;
         }
         else{
            a=c;
         }
    }

    //cout<<"The result "<<c<<endl;
    printf("%.10lf",c);
    return 0;
}
