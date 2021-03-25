#include <iostream>

using namespace std;

int len (char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int small_size=len(str+1);
    return 1+small_size;
}

void removeD(char str[]){
    if(str[0]=='\0'){
        return ;
    }
    if(str[0]!='d'){
        removeD(str+1);
    }else{
        int i=1;
        for(;str[i]!='\0';i++){
                str[i-1]=str[i];
        }
        str[i-1]='\0';
        removeD(str);
    }

    //cout<<str;

}

void replace_character(char ch[],char a, char x){
    if(ch[0]=='\0'){
        return ;
    }
    if(ch[0]==a){
        ch[0]=x;
    }
    replace_character(ch+1,a,x);
}
void  remove_cons_duplicate(char ch[]){
    if(ch[0]=='\0'){
        return ;
    }
    remove_cons_duplicate(ch+1);
    if(ch[0]==ch[1]){
        int i=0;
        for(;ch[i]!='\0';i++){
            ch[i]=ch[i+1];
        }
        ch[i]='\0';
    }
}


int main()
{
    char ch[100];
    cin>>ch;
    //cout<<len(ch);
    /*
    int sizes=0;
    for(int i=0;ch[i]!='\0';i++){
        sizes++;
    }
    cout<<sizes;*/
    removeD(ch);
    cout<<ch;
    //replace_character(ch,'a','x');
    //cout<<ch;
    //remove_cons_duplicate(ch);
    //cout<<ch;
    return 0;
}