// /*:: Question
//      Write a function named  slice,which takes a string & returns a sliced string from index n to m.   */

// #include<stdio.h>

// void slice(char str[],int n,int m);

// int main()
// {
//    char str[]="Rajankumar";
//    slice(str,1,3);
//    return 0;
// }
// void slice(char str[],int n,int m)
// { 
// 	char newStr[100];
// 	int j=0;
// 	for(int i=n;i<=m;i++,j++)    //( n & m valid value jo string ke mid me lie kar raha ho )
// 	{	
// 		newStr[j]=str[i];
// 	}
//     newStr[j]='\0';
// 	puts(newStr);
// }



// # include <stdio.h>

// void slice(char *ptr, int m,int n); 

// void slice(char *ptr, int m,int n) 
// {
//     int i=0;
//     while ((m+i)<=n) 
// 	{
//        ptr[i]=ptr[i+m];
// 	   i++;
//     }
//     ptr[i]='\0';
// }

// int main () 
// {
//     char ptr[] = "Rajan";
//     slice(ptr,0,3);
//     printf("\n%s", ptr);
//     return 0;
// }
