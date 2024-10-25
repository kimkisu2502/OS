#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
	int i;
	int c = 2;
	ps(0);
	for(i = 1; i< 11; i++){
		printf(1, "%d: ", i);
		if(getpname(i))
			printf(1, "Wrong pid\n");
		
	}
	setnice(getpid(), 5);
	int pid = fork();
	ps(0);
	if(pid > 0){
		setnice(getpid(), 0);
	}
	else{
		
	}
	for(i = 0; i < 0x7FFFFFFF; i++){
		int a = i;
		c = a % 4;
		c = a * a * a / 5 + a % c;
		a += c;
		c *= a;
		for(int j = 0; j < 0x7FFFFFFF; j++){
			a/=a/2;
			a+=5;
			a*=24862 %284 *2405246 % 2406294;
		}
		if(i%100000000 == 0){
			ps(0);
		}
	}
	if(pid > 0)
		wait();
	
	exit();
}
