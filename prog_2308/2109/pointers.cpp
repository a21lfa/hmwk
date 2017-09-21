#include <iostream>

using namespace std;
int strlen(char *s){
    char *p =s;
    while(*p!='\0')
       p++;
    return p-s;
}
void strcpy(char *s,char *t){
    //int i;
    //i = 0;
    //while((*(s+i) = *(t+i))!='\0')
        //i++;
    while((*s++ = *t++));
}
int main()
{
    char str[]="ciencias";
    cout<<strlen(str)<<endl;
    char s[]="ciencia";
    char t[7]=" ";
    strcpy(t,s);
    cout<<t<<endl;
    return 0;
}
