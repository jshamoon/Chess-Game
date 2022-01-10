//#include <iostream>
#include <map>
#include <string>

//using namespace std;

class Board{

	public:
		std:: map<std::string, std::string> positions;
		 Board(){
			
			for(char let='a'; let<='h'; let++){
				for(int index=1; index<=8; index++){
					std::string pos;
					pos +=let;
					pos += std::to_string(index);
					std::cout << pos << std::endl; 
					positions[pos] = "null";
				}
			}
		}		
	
};


