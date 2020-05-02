#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
	srand(time(NULL));
    int computer=0;
    computer=rand();
	if(computer % 2 == 0 || computer % 3 == 0 || computer % 5 == 0 || computer % 7 == 0 || computer % 9 == 0 || computer % 11 == 0){
		cout<<"Player loses"<<endl;
		
	}else{
		cout<<"Player wins"<<endl;
		
	}
	

    return 0;
}
