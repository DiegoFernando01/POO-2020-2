#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int>nums = {3,4,7,7,12,23,2,1,0,18,5,13,5,-4};
	int i;
	int aux;
	
	for(i=0;i<nums.size();i++){
		for(int j=0;j<nums.size()-1;j++){
			if(nums[j] > nums[j+1]){
				aux = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = aux;
			}
		}
	}
	cout<<"Iteraciones: "<<i<<endl;
	cout<<"Ordenacion de forma Ascendente: "<<endl;
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: "<<endl;
	for(int i=nums.size()-1;i>=0;i--){
		cout<<nums[i]<<" ";
	}
	
	return 0;
}

