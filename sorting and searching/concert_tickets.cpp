// There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.
// Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.
// Input
// The first input line contains integers n and m: the number of tickets and the number of customers.
// The next line contains n integers h_1,h_2,\ldots,h_n: the price of each ticket.
// The last line contains m integers t_1,t_2,\ldots,t_m: the maximum price for each customer in the order they arrive.
// Output
// Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.
// If a customer cannot get any ticket, print -1.
// Constraints

// 1 \le n, m \le 2 \cdot 10^5
// 1 \le h_i, t_i \le 10^9

// Example
// Input:
// 5 3
// 5 3 7 8 5
// 4 8 3

// Output:
// 3
// 8
// -1

#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
  int n, m;
  cin >> n >> m;
  multiset<int> h; // using multiset allows repeated elments, and it is way more faster than vector, o(logn), BST
  for(int i=0; i<n; i++)
  {
  	int x;
  	cin >> x;
  	h.insert(x);
  }
  for(int i=0; i<m; i++)
  {
  	int t;
  	cin >> t;
  	auto it = h.upper_bound(t); // first element grater than t
  	if(it == h.begin())
  		cout << -1;
  	else
  	{
  		--it; // upper_bound ONLY finds the element strictly grater than t
  		cout << *it;
  		h.erase(it);
  	}
  	cout << endl;
  }
  return 0;
}