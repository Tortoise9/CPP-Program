#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float f[20];
	float x[20];
	cout<<"Enter the number of data ; "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
	cout<<"Enter the x and fx :"<<endl;
	cin>>x[i]>>f[i];
	}
	float p = 0;
	int point =1.5;
	for(int i=1;i<=n;i++){
	float l=1;
		for(int j=1;j<=n;i++){
		if(i!=j){	
		 l = l* (point- x[j])/(x[i]-x[j]);	
		}
	}
		p=p+ f[i]*l;
}
	cout<<"The interpotion value of f ["<<point<<"]  ="<<p<<endl;
return 0;
}
