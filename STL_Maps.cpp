#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

void iterMap(map<int, int> mm){
	cout << "Size: " << mm.size() << endl; 
	for(auto &k_v : mm){ // Accesing n element in a map and printing them orderly takes O(nlog(n))
	cout << k_v.first << " " << k_v.second << endl;
}
}
int main(){ 

// map<int , string > mm;
// mm[1] = "LALALAL";
// mm[2];
// for(auto &k_v : mm){
// 	cout << k_v.first << " " << k_v.second << endl;
// }


map< int, int> m;   // Can put any Container inside the < > thing...
m[1] = 67;
m[5] = 432;
m[4] = 2323;
m[3]; // Inserting a key as well takes a time of (O(log n)) & so does Accessing it.

auto it = m.find(8);

if( it != m.end()){   // Gives Segmentation Fault when Any value at or beyond m.end() is Accessed
m.erase(it); // O(log(n))
}

if(it == m.end()) cout << "NOT FOUND" << endl;

else  cout << "FOUND: " << it->first << " " << it->second << endl;
iterMap(m);




// Below are three ( 3 ) ways of writing Iterating statement, choose what you like most

// map<int, int> :: iterator it;
// for( it = m.begin() ; it != m.end(); ++it){
// 	cout << it->first << " " << it->second <<endl;
// }

// for(pair<int , int> pp: m){
// 	cout << pp.first << " " << pp.second << endl;  
// }

// for(auto &pr: m){ // (O(nlogn)) coz we are accessing n elements n = 5 ;}

// 	cout << pr.first << " " << pr.second << endl;  
// }
// cout << m[1] << endl << m[5] <<	endl << m[4] << endl;

	return 0;
}