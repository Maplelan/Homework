double mypow( double x, int n ){
	double out=1;
	//int i;
	for(int i=0;i<n;i++){
		out=out*x;
	}
	return out;
}
