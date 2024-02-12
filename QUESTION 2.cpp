/*Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100.*/
#include <iostream>
using namespace std;
int main()
{
	int p1,p2,p3;
    cout<<"number of terms \n";
    p1=1, p2=2;
    cout <<"fibonacci series\n";
    cout<<p1<<"\n"<<p2<<endl;
    for(int i=1; i <= 100;i++)
	{
		p3=p1+p2;
		cout<<p3<<endl;
		p1=p2;
		p2=p3;
	}
	return 0;
}