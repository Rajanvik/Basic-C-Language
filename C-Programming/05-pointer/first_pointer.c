// :: Concept--1

// #include<stdio.h>

// int main()
// {
// 	int age = 22;
// 	int *ptr = &age; // ye jo pointer variable hai wo age ki addres ko hold kar liya 
// 	                 // ye jo pointer variale hai wo kiya karega age ki memory location ka address apne andar store kar lega  
// 	int _age = *ptr; // pointer jis address ko store kar raha waha pe kiya value store hai

// 	printf("age = %d",_age);
// 	return 0;
// }

// :: Concept--2(Address Ko Print kaise Karte hai)

//  #include<stdio.h>

// int main()
// {
// 	int age = 22;
// 	int *ptr = &age; 
// 	int _age = *ptr;

// 	printf("The value address of age = %p\n", &age);  //age ki address value print hoga jo ki (hexa decimal format->0x7fff981e2f58) me ayega.
// 	printf("The value address of age = %u\n", &age); // hexa decimal format ko convert karke unsigned int me convert kar deta hai.
// 	printf("The value of ptr variable = %u\n",ptr);  // age ka jo address hai wo ptr me jake store ho gaya hai (es liye &age=ptr ka value same ayega) 
// 	printf("The value address of ptr = %u\n",&ptr);  // ptr ka address value alag ayega
// 	return 0;
// }

//:: Concept--3(Pointer Pe Jo Address Store Hai Uska Value Ko Print kaise Karte hai)


 #include<stdio.h>

int main()
{
	int age = 22;
	int *ptr = &age; 
	int _age = *ptr;
 
    printf("age = %d\n",age);
	printf("age = %d\n",*ptr);
	printf("age = %d\n ",*(&age));

	return 0;
}
