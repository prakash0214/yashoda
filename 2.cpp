//Q. WAP to check whether the character is vowel or consonent in c++ ?

#include<iostream>
using namespace std;

int main()
{
	char ch;
	
	cout<<"  Enter the character : "<<endl;
	cin>>ch;

	if((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') || (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
	{
		cout<<ch <<" is vowel "<<endl;
	}
	else
	{
		cout<<ch <<" is consonent "<<endl;
	}
}



