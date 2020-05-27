#include<iostream>
#include<string>
using namespace std;
int main()
{	getline(cin, str); 
	int pos = -1;
	int pos_r = 0;
	for( int i = 0 ; i < str.length(); i++)
	{
		if( str[i] == ' '|| i == str.length()-1)
		{
			//cout<< "i="<< i << '\n';
			pos_r = pos ;
			pos = i ;
			for( int k = i-1 ; k > pos_r ; k--)
			{
				cout<< str[k];
			}
			cout<< ' ';
		}
	}
}
