#include<iostream>
using namespace std;
struct rectangle
{
	double l;
	double b;
};

class compute
{
	rectangle s[2];
	public:
		void input()
		{
			for(int i=1;i<=2;i++)
			{
				cout<<"Rectangle "<<i<<endl;
				cout<<"Enter Length,Breadth : "<<endl;
				cin>>s[i].l>>s[i].b;
				cout<<endl<<endl;
				fflush(stdin);
			}
		}
		
		void dimension(rectangle s)
		{
			cout<<"Dimensions are Length : " <<s.l<<endl;
			cout<<"Dimensions are Breadth : " <<s.b<<endl;
		}
		
		void area(rectangle s)
		{
			dimension(s);
			cout<<"Sum of dimensions is : "<<(s.l + s.b)<<endl;
			cout<<"Area is : "<<(s.l * s.b);
			
		}
		
		void show()
		{
			input();
			for(int i=1;i<=2;i++)
			{ 
			  cout<<"Rectangle "<<i<<endl;
			  area(s[i]) ;
			  cout<<endl<<endl;
			}
		}
};
int main()
{
	compute ob;
	ob.show();
	return 0;
}
