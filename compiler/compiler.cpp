#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char* argv[]){

    if(argc <= 1){
	 cout << "No input file given!" << endl;
	 return 1;
    }else{
	 
	  for(int i = 1 ; i < argc; i ++){
	       string line;
	       ifstream myfile;
	       myfile.open (argv[i]);
	       while ( myfile.good() ) {
		    getline (myfile,line);
		    cout << line << endl;
	       }
	       myfile.close();
	  }
	  return 0;
    }
}
