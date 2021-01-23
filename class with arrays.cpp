#include<iostream>
using namespace std;

class shop
{
	int item[100];
	int price[100];
	int counter;
	public :
		void count(void){ counter = 1 ;}
		void setprice(void);
		void displayprice(void);
	
};

void shop :: setprice(void)
{
	cout<<"enter ID of your item no."<<counter<<" : "<<endl;
	cin>>item[counter];
	cout<<"enter price of your item : "<<endl;
	cin>>price[counter];
	counter++;
}

void shop :: displayprice(void)
{
	for(int i=1;i<counter;i++)
	{
		cout<<"THE PRICE OF "<<item[i]<<" : "<<price[i]<<endl;
	}
}

int main()
{
	shop dukaan;
	dukaan.count();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.displayprice();
	
	
	return 0;
}
