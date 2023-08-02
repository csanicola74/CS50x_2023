// VERSION 1
// this is a very special command that tells the compile that you want to use the capabilities of library called stdio.h
//#include <stdio.h>

//int main(void)
//{
//    printf("hello, world\n");
//}


// VERSION 2
// CS50 has its own library
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // get_string - get a string from the user
    // answer is what now becomes the string variable from what the user enters
    string answer = get_string("What's your name?");
    // %s tells the printf function to prepare itself to receive a string
    // \n (an escape sequence) that simply just enters the "$' onto a new line
    printf("hello, %s\n", answer);
}









