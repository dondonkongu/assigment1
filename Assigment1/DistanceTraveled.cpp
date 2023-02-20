#include <iostream>
#include <math.h>

using namespace std;
double tinhqd();
int main(int argc, char** argv) {
	tinhqd();
	return 0;
}
double tinhqd(){
	int s,t,v;
	cout<<"What is the speed of the vehicle in mph? ";
	cin>>v;
	cout<<"How many hours has it traveled? ";
	cin>>t;		
	while(v<=0||t<1){
		cout<<"Wrong, type again ! \n"<<"Speed of the vehicle not is a nagative number and Time to travel less than 1\n";
		cout<<"What is the speed of the vehicle in mph? ";
		cin>>v;
		cout<<"How many hours has it traveled? ";
		cin>>t;	
        }      
	if(v>0&&t>=1) {
		cout<<"Hours Distance travled"<<endl;
        cout<<"-------------"<<endl;
		for(int i=1;i<=t;i++){
        s=v*i;
        cout<<i<<"\t"<<s<<"\n";
        }   

	}
		
	return s;

}