#include<iostream>
using namespace std;
int main ()
{
	int hard,tensile;
	float carbon;
	cout<<"Enter the hardness ";
	cin>>hard;
	cout<<"Enter the tensile ";
	cin>>tensile;
	cout<<"Enter the carbon "<<endl;
	cin>>carbon;
	if (hard > 50  &&  carbon < 0.7   &&  tensile > 5600)
	{
		cout<<"Grade 10";
	}
	
	else if (hard > 50   &&  carbon < 0.7   &&  tensile <= 5600)
	{
		cout<<"Grade 09";
	}
	
	else if ( hard <= 50  &&  carbon < 0.7  &&  tensile > 5600 )
	{
		cout<<"Grade 08";
	}
	
	else if (hard > 50  &&  carbon >= 0.7  &&  tensile > 5600)
	{
		cout<<"Grade 07";
	}
	
	else if (hard < 50  &&  carbon < 0.7 &&  tensile <= 5600 )
	{
		cout<<"Grade 06";
	}
	
	else if (hard < 50  &&  carbon > 0.7  &&  tensile < 5600 )
	{
	     cout<<"Grade 05";
    }
	
}
