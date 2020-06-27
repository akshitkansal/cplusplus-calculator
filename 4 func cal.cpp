#include <iostream>
using namespace std;
int main()
{
	float num1=0,num2=0,res=0;
	char opr;
	cout<<"Enter the 1st no.: ";
	cin>>num1;
	cout<<"Enter the 2nd no.: ";
	cin>>num2;
	cout<<"Enter one of the following operator:\n1.Add(+)\n2.Sub (-)\n3.Mult(*)\n4.Div(/)\n";
	cin>>opr;
	switch(opr)
		{
			case '+': res=num1+num2;
					  cout<<num1<<" + "<<num2<<" = "<<res;
					  break;
			
			case '-': res=num1-num2;
					  cout<<num1<<" - "<<num2<<" = "<<res;
					  break;
			
			case '*': res=num1*num2;
					  cout<<num1<<" * "<<num2<<" = "<<res;
					  break;
					  
			case '/': res=num1/num2;
					  cout<<num1<<" / "<<num2<<" = "<<res;
					  break;
					  
			default : cout<<"Error";
		}
	return 0;
}
