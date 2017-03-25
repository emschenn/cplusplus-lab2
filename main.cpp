#include <iostream> 
#include <math.h> 
#include <fstream> 
#include <cstdlib> 
#include "elo_rating.h" 
using namespace std; 
int main() 
{ 
	Data start; 
	ifstream inFile("infile",ios::in); 
        if(!inFile) 
        { 
               	cerr<<"Failed reading"<<endl; 
        	exit(1); 
      	} 
        double k,ra,rb,sa; 
	inFile>>k>>ra>>rb; 
	ofstream outFile("outfile",ios::out); 
	if(!outFile) 
	{ 
		cerr<<"Failed opening"<<endl; 
		exit(1); 
	} 
	outFile<<ra<<" "<<rb<<endl; 
	while(inFile>>sa) 
        { 
                outFile<<round(start.new_ra(sa))<<" "<<round(start.new_rb(1-sa))<<endl; 
        } 
}

