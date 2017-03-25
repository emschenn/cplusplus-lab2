#include <iostream> 
#include <math.h> 
#include <fstream> 
#include <cstdlib> 
#include "elo_rating.h" 
Data::Data() 
{ 
        ifstream inFile("infile",ios::in); 
	if(!inFile) 
        { 
                cerr<<"Failed reading"<<endl; 
                exit(1); 
        } 
        inFile>>k>>ra>>rb; 
} 
double Data::ea() 
{ 
        return(1/(1+pow(10,(rb-ra)/400))); 
} 
double Data::eb() 
{ 
        return(1/(1+pow(10,(ra-rb)/400))); 
} 
double Data::new_ra(double sa,double ea) 
{ 
        ra = ra+k*(sa-ea); 
        return ra; 
} 
double Data::new_rb(double sb,double eb) 
{ 
        rb = rb+k*(sb-eb); 
        return rb; 
} 

