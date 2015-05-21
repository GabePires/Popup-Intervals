#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
	//set name of popup
	//set intervals of popup
	string advertisement = "show ads";
	int interval_ad = 5;

	string rate = "ask rate";
	int interval_rate = 16;

	string follow = "ask follow";
	int interval_follow = 7;

	for(int i = 1; i <= 20; i++){
		cout << i << "\t" << " : ";

		//add an if i%interval_x == 0 {cout name of interval} 
		if(i%interval_ad==0){
			cout << advertisement << " ";
		}
		if(i%interval_rate==0){
			cout << rate << " ";
		}

		if(i%interval_follow==0){
			cout << follow << " ";
		}

		cout << endl;
	}

	return 0;
}