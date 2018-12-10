#include<iostream>
#include<cmath>
using namespace std;
double newt(double, double);
   int c=0;

int main(){

	double guess1=10, guess2=-10, accuracy=0.1;
	double result1=newt(guess1,accuracy);
	//double result2=newt(guess2,accuracy);

	return 0;
}
double newt(double xn, double accu){
	double temp;
	c++;
	double f=(6*xn*xn)-(17*xn)-14;
	double fdash=(12*xn)-17;
	double xnplus1=xn-(f/fdash);    //This line is the Newton Raphson method
	temp=xn;
	xn=xnplus1;

	if(abs(temp-xn)>=accu){   //This condition determines whether a root
                                  //has been found to a specified accuracy, accu

		newt(xn, accu);   //This line is where the recursion starts
		return 0;
	}
	cout<<"Root:"<<"    "<<xn<<endl;
	cout<<c;
}
        //return xn;


