#include<bits/stdc++.h>
using namespace std;
#define N 100000
#define ll long long int
// sieve arr contain the primes upto 10^5
int sieveArr[N+1]={0};
// /primes array contains primes from sieve
vector<int>primes;

void sieve()
{
	// sieve of erestosthenes
	for( ll i = 2; i<= N;i++)
	{
		if(sieveArr[i]==0)
		{
			primes.push_back(i);
			//  mark multiples of i as non prime
			for(ll j=i*i ; j<=N;j+=i)
			{ 
				sieveArr[j]=1;//non prime marked
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	sieve();// generate arr once 
	int tt = 1;
	cin >> tt;//nums of test cases
	while(tt--)
	{
		int m,n;
		cin >> m >> n;
		vector<int>segment(n-m+1,0);// max size can be n-m+1
		for(auto p:primes)
		{
			// stop for p*p >n
			if(p*p> n)
			{
				break;
			}
			// nearest starting point
			int start=(m/p)*p;
            if(p>=m and p<=n)
            {
            	start = 2*p;//special case
            }
            // mark multiples as not prime
			for(int j=start;j<=n;j+=p)
			{
				if(j<m)//start index lower then the lower limit
				{
					continue;
				}
				segment[j-m]=1;//mark not prime
			}
		}
		//primes stored as 0s
		for(int i=m;i<=n;i++){
			if(segment[i-m]==0 and i!=1)
			{
				cout<<i<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
