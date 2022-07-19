/* 
 * File:   CPPTemplate
 * Author: Erik Alcaraz
 * Created on June 22, 2022, 2:32 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float average = 0.0;
    int score;
    
	cout<<"Input 5 test scores ";
    
    for(int i = 0;i<5;i++){
    	cin>>score;	
    	average = average + score;
	}
	
	average = average / 5;
	
	cout<<"The average = "<<fixed<<setprecision(1)<<average<<endl;
	
	return 0;
}

