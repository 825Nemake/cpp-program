#include<iostream>
using namespace std;
class Complex{
	private:
		int real,imag;
	public:
		Complex(int r =0,int i = 0){
			
			real = r; imag = i;
		}	
		
		Complex operator + (Complex const &obj){
			Complex res;
			res.real = real + obj.real;
			res.imag = imag + obj.imag;
			return res;
		}
		
		Complex operator - (Complex const &obj){
			Complex sub;
			sub.imag = imag - obj.imag;
			sub.real = real - obj.real;
			return sub;
		}
		Complex operator *(Complex const &obj){
			Complex multi;
			multi.real = (real * obj.real) - (imag * obj.imag);
			multi.imag = (imag * obj.imag) - (imag *obj.real);
			return multi;	
		}
		Complex operator /(Complex const &obj){
			Complex div;
			div.real = (real / obj.real) - (imag / obj.imag);
			div.imag = (imag / obj.imag) - (imag / obj.real);
			return div;
			
		}
		void print()
		{
			cout<< real<<"+i"<<imag<<'\n';
		}
};
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	Complex c1(a,b), c2(c,d);
	
	cout<<"Their sum is :"<<endl;
	Complex c3 = c1 + c2;
	c3.print();
	cout<<"Their sub is :"<<endl;
	Complex c4 = c1 - c2;
	c4.print();
	cout<<"their multi is :"<<endl;
	Complex c5 = c1 * c2;
	c5.print();
	cout<<"their div is :"<<endl;
	Complex c6 = c1 / c2;
	c6.print();
	return 0; 
	
}
