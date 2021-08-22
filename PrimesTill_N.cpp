// this is sieve of eratosthenes
// it gives one of the best performances when compared with others algorithms 
// GROUP 3 
// BT18MEC089(MAHESH KUMAR)
// BT18MEC095(SRINIVAS)
// BT18MEC099(PRUTHVI RAJ)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	
	int n;
	
	cout<<"Enter a number till wich you want to get all primes\n";
	
	cin>>n;
	
	bool isPrime[n+1];
	memset(isPrime,true,sizeof(isPrime));
	isPrime[0]=false;
	isPrime[1]=false;
	
	int i = 2;
	
	vector<int> allPrimes;
	while(i*i<=n){
		if(isPrime[i]){
			
			for(int j=i*i;j<=n;j+=i){
				isPrime[j]=false;
			}
			
		}
		i++;
	}
	
	for(int i=2;i<=n;i++){
		if(isPrime[i]){
			allPrimes.push_back(i);
		}
	}
	
	int totalPrimes = allPrimes.size();
	
	cout<<"total primes till "<<n<<" are "<<totalPrimes<<"\n";
	
	if(totalPrimes == 0){
		cout<<"empty list\n";
		
		cout<<"Total sum is 0\n";
	}
	else{
		cout<<"primes are ";
		
		ll sum=0;
		
		for(int i=0;i<totalPrimes;i++){
			cout<<allPrimes[i]<<" ";
			sum+=allPrimes[i];
		}
		cout<<"\n";
		
		cout<<"sum of all primes till "<<n<<" is "<<sum<<"\n";
	}
	
    return 0;
}
