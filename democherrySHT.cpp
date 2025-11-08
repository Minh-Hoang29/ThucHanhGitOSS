bool KTSHTsai (int n){
	int sum =0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
		sum+=i;
		if(i*i!=n)){
			sum+=n/i;
		}
	}
	}
	return sum==n;
}
