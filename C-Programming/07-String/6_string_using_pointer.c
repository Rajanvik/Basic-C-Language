#include<stdio.h>

int main()
{
// पहले मेरा Name Hello World था bad me मुझे बदलना है। to mane change करके अपना Name Rajan कर लिया usi ko hum (Can Change) Kahete hai

	char *canchange="Hello World";
	
	puts(canchange);
	canchange="Rajan";
	puts(canchange);

// जब भी Array Notation a जाए program me फिर बाद में use hum modified नहीं कर सकते हैं usko. agar apko change karna hai charcter pointer ka used karo

    //    char cannotchange[]="Hello World";
	//    puts(cannotchange);
	//    cannotchange="hello";
	//    puts(cannotchange);

	return 0;
	
}