#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
	int i;
	ps(0);
	for(i = 1; i< 11; i++){
		printf(1, "%d: ", i);
		if(getpname(i))
			printf(1, "Wrong pid\n");
		setnice(i,i+1);
		ps(i);
		
	}
	
	exit();
}
