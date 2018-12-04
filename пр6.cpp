#include<bits/stdc++.h>
using namespace std;
 	double x, eps, y;
float my(float x){
	float z, q = x;
	int n = 1;
	int p = 1;
	while(fabs(z) > eps){
		q = pow(x,2*n-1)/(2*n-1);
		cout << q << " ";
		if(p==1){
			z = z + q;
			p = 2;
		}
		else{
			z = z - q;
			p=1;
		}
		//z +=q;
		n++;
	}
}
int main (){
	cin >> x >> eps;
	
	if(x>1){
		my(x)/my(x-5);
	}
	else{
		my(x)+my(2*x);
	}
	cout << y << endl;
  return 0;
}
