#include<bits/stdc++.h>
using namespace std;

float my(float x,double eps){
	float z, q = x;
	int n = 1;
	int p = 1;
	while(fabs(z) > eps){
		q = pow(x,2*n-1)/(2*n-1);
		cout << q << " ";
		
		z += n % 2 ? -q : q;
		n++;
	}
}
int main (){
	double x, eps, y;
	cin >> x >> eps;
	
	if(x>1){
		my(x, eps)/my(x-5, eps);
	}
	else{
		my(x, eps)+my(2*x, eps);
	}
	cout << y << endl;
  return 0;
}
