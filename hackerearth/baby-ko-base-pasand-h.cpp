#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int counter = 1; counter <=n; ++counter)
    {
        fact *= counter;
    }
	return fact;
}
int main()
{
	int number;
	cin>>number;
	int answer=factorial(number);
	cout<<answer;

}
