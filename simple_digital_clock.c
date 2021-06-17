//Created by Subash giri
#include <stdio.h> // main library
#include <time.h> // for current local time
#include <unistd.h> // for sleep(1), system('cls')

int main(){
	int hr,min,sec;
    time_t s; //time as sec
    
    struct tm* current_time;
    s = time(NULL);
    
    current_time = localtime(&s); //local time from computer
    hr = current_time->tm_hour; // hours
    min = current_time->tm_min; //min
    sec = current_time->tm_sec; // secs
	system("cls && color a"); // clear terminal and text color as blue
	
	
	start:
	for(hr; hr < 24; hr++){
		for(min; min < 60; min++){
			for(sec; sec < 60; sec++){
				system("cls");
				// only for fun
				 printf("\n\n\t\t\t-----------------------\n");
	       printf(" \t\t\t   DIGITAL CLOCK      \n");
	       printf("  \t \t\t          By @sbs0x14");
	       printf("\n\t\t\t-----------------------");
        
	       printf("\n\n\t\t\tDATE : ");
				 system("date /T"); // system date cmd 
	       printf("\n\n\t\t\t*********************************");
				 printf("\n\n\t\t\t\t  %02d:%02d:%02d",hr,min,sec); // print time as HH:MM:SS form
				
				if(hr < 12){
					printf(" AM ");
				}
				else{
					printf(" PM ");
				}
				printf("\n\n\t\t\t*********************************"); //
				sleep(1); // stop the program for 1 sec
				
			}
			sec = 0; // if sec becomes 61 then it assign it 0
			
		}
		min = 0; // if mins = 61 then min =0
	}
	hr = 1; // if hrs = 25  then hr = 1
	
	goto start;
	return 0;
}
