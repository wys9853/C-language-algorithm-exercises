#include <iostream>
using namespace std;
	void reverse(int *A,int lo,int hi){
    	if(lo<hi){
		swap(A[lo],A[hi]);reverse(A,lo+1,hi-1);
	    }
	}
int main(){
	int A[9]={1,2,3,4,5,6,7,8,9};
	reverse(A,0,8);
	for(int i=0;i<9;i++){
		cout<<A[i];
	} 
	return 0;	
}
