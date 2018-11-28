#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
main()
{ int a,b,c,d,e;
	cout << " Nhap vao ten thang a:";
	cin>>a;
	e=28;
	b=29;
	c=30;
	d=31;
	if ( a> 12){ cout<< "So thang khong duoc qua 12";}
	else { if ( a==1 || a==3 || a==5 || a==7 ||a==8 || a==10 || a==12){ cout << " So ngay trong thang :"<<d;}
	else { if ( a==2) {cout << " Nam nhuan " << b<<endl;
	  cout << " nam khong nhuan"<< e;}
   	else  {if (a==2||a==4||a==6||a==9 ){ cout<< " so ngay trong thang:"<<c;}}}}}
