#include<bits/stdc++.h>
using namespace std;

vector<int>v;
// Values (stored in array v)
// Weights (stored in array w)
// Number of distinct items (n)
// Knapsack capacity W
bool knapSack(int w[], int n, int W,int W2)
{
	// base case: Negative capacity
	if (W < W2/2)
		return false;

	// base case: no items left or capacity becomes 0
	if (n < 0 || W == 0)
		return false;

	// Case 1. include current item n in knapSack (v[n]) and recur for
	// remaining items (n - 1) with decreased capacity (W - w[n])
	v.push_back(n-1);
	bool include = w[n] + knapSack(w, n - 1, W - w[n],W2);
    if(include == true)
    {
    	return true;
    }
    v.pop_back();
	// Case 2. exclude current item n from knapSack and recur for
	// remaining items (n - 1)
	bool exclude = knapSack(w, n - 1, W,W2);
    if(exclude == true)
    {
    	return true;
    }
	// return maximum value we get by including or excluding current item
	return false;
}

// 0-1 Knapsack problem
int main()
{
	// Input: set of items each with a weight and a value

	int w[] = {1,1,1 ,17 ,1 ,1 ,1};
	// Knapsack capacity
	int W = 12;

	// number of items
	int n = sizeof(w) / sizeof(w[0]);

	cout << "Knapsack value is " << knapSack(w, n - 1, W,W)<<" ";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

	return 0;
}
