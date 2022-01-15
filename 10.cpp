#include <iostream>
using namespace std;

struct Complex
{
	public :
		int real, img;
};

int main()
{
	Complex num1, num2, sum;

	cout << "\nEnter the first complex number real and ing part "<<endl;
	cin >> num1.real>>num1.img;

	cout <<"First complex number : "<<num1.real<<" "<<num1.img<<endl;
       
	
	cout << "Enter the second complex number real and img part "<<endl;
	cin >> num2.real>>num2.img;

	cout <<"Second complex number : "<<num2.real<<" "<<num2.img<<endl;

	sum.real = num1.real + num2.real;
	sum.img = num1.img + num2.img;

	if (sum.img >= 0)
		cout << "Sum of two complex numbers = " << sum.real << " + " << sum.img << "i"<<endl;
	else
		cout << "Sum of two complex numbers = " << sum.real << " - " << sum.img << "i"<<endl;

	return 0;
}





