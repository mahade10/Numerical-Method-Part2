#include<bits/stdc++.h>
using namespace std;
//double e=0.000001;
double f(double x){
    return x*x*x-2*x-5;
}

int main(){
    double a=1,b=1,c;
     while(1){
        if(f(a)*f(b)<0){
            break;
        }
        else{
            b++;
        }
     }
    int n=100;
     while(n--){
         c=(a*f(b)-b*f(a))/(f(b)-f(a));

         if(f(c)==0.0) break;
         else if(f(a)*f(c)<0){
            b=c;
         }
         else{
            a=c;
         }
    }
     printf("%.10lf",c);

}
