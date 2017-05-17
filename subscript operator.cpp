#include<iostream>
using namespace std;
class array{
public:	int array[4];
        int& operator[](int n){
        return array[n];
		}
};
int main(){

array o1;
int k=10;
for(int i=0;i<4;i++){
	cin>>o1[i];
	
}
int temp;
for(int i=0;i<k;i++){
cout<<o1[i];cout<<endl;
}

}
