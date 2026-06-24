#include <iostream>
using namespace std;

int main(){
	double ratedCurrent;
	double measuredCurrent;
//Progemme header
	cout<<"=========================================="<<endl;
	cout<<"        Current Overload Checker          "<<endl;
	cout<<"=========================================="<<endl;
	
	cout<<"Enter rate Current of circuit breaker (A): ";
	cin>>ratedCurrent;
	
	cout<<"Enter measured current in circuit (A): ";
	cin>>measuredCurrent;
	
	//Display inpuy
	cout<<"\n--- Results ---"<< endl;
	cout<<"Rated Current: "<<  ratedCurrent  << "A" <<endl;
	cout<<"Measured Current: "<< measuredCurrent <<"A"<<endl;
	cout<<"Status: ";
	
	
	if (measuredCurrent > ratedCurrent){
		cout<<"Overload detected. Current breaker should trip. "<<endl;
		
	}
	else{
		cout<<"Current is within safe limit.  "<<endl;
		
	}
	cout<<"========================================"<<endl;
	return 0;
	
}
