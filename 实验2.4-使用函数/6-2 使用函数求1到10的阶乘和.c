double fact( int n ){
	double out=1;
	//����1���� n * (n-1) * (n-2) * ... * 2 * 1 ���� 
	for(int i=0;i<n;i++){
		out=out*(n-i);
	} 
	return out;
	//����2���� 1*2*3*...*(n-1)*n ���� 
	for(int i=1;i<=n;i++){
		out=out*i;
	}
	return out;
}
 
