//Given a number N find the product of all unique prime factors of that number.
#include <bits/stdc++.h>
using namespace std;
int primeProduct(int num){
    int prod = 1;
    if(num == 1){
        return 1;
    }
    if(num == 2){
        return 2;
    }
    for(int i =2;i<=num;i++){
        if(num%i==0){
             if(i == 2){
                 prod=prod*i;   
                }
            else{
                int flag = 0;
            for(int j=2;j<i;j++){
               
                if(i%j==0){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                prod = prod*i;
            }
                
            }
            
        }
    }
    return prod;
}
int main() {
	int size,num;
	cin>>size;
	for(int i = 0;i<size;i++ ){
	    cin>>num;
	    cout<<primeProduct(num)<<"\n";
	}
	return 0;
}
