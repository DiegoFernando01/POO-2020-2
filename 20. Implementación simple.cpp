#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>nums = {3,4,7,7,12,23,2,1,0,18,5,13,5,-4};
 int menor, aux, it=0;
     for (int sel = 0; sel < nums.size() - 1; sel++)
     {
         menor = sel;
         for (int j = sel+1; j < nums.size(); j++){	 
              if (nums[j] < nums[menor]){
			  menor = j;}
			}
          aux = nums[sel];
          nums[sel] = nums[menor];
          nums[menor] = aux;
          it++;
     }
    cout<<"iteraciones: "<<it<<endl; 
    cout<<"Ordenacion de forma Ascendente: "<<endl;
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}	
	return 0;
}

