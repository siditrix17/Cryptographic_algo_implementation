#include<bits/stdc++.h>

using namespace std;



void showitem( vector <int> r_0){
	for(auto it: r_0){
		cout<<it<<"   ";
	}
}


void title(){
	vector <string> ti={"x","y","Rem","Quot"};
	for(auto i: ti){
		cout<<i<<"   ";
	}
}





int main(){

	
 	vector<vector<int>> v(2);
 	int a,b;
 	cout<<"Enter a:";cin>>a;
 	cout<<"Enter b:";cin>>b;
     title(); cout<<endl;
	 v[0] = {1, 0, a};
     v[1] = {0, 1, b};
     while (v[1][2]) {
         int q = v[0][2] / v[1][2]; //quotient calculation
         vector<int> r_0 = v[1];
		 r_0.push_back(q); 
         vector<int> r_1 = {v[0][0] - q * v[1][0], v[0][1] - q * v[1][1], v[0][2] - q * v[1][2]};
         v[0] = r_0;
 		showitem(r_0); 
		 cout<<endl;   
		     
         v[1] = r_1;
     }
     int x = v[0][0];
     int y = v[0][1];
	
	cout<<"Value of X and Y :"<<x<<" "<<y;

 	
 	
 	
 	
 	
 	
 	
 	












	
	
}
