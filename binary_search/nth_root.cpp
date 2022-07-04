double multiply(double mid ,int n){
    double res =1.0;
    for(int i=1;i<=n;i++){
        res*=mid;
    }
return res;
}
double findNthRootOfM(int n, long long m) {
	double l = 1, h = m;
    double eps = 1e-6;
    while(h-l>eps){
        double mid = (l+h)/2.0;
        if(multiply(mid,n)<m){
            l= mid;
        }
        else h = mid;
    }
    return l;
}
