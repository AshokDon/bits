#include<bits/stdc++.h>
//#include<string>
using namespace std;
void Takeinput(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    Takeinput();
   /* for(int i = 0 ; i < 8 ; i++){
        PrintBinary(i);
    }
    //trick 1: even and odd
    int n;
    cin >> n;
    //trick 2  multiplaction and division 
    cout<<(n>>1)<<endl;
    cout<<(n<<1)<<endl;

    // trick 3 Asscci value
    for(char c = 'A' ; c <= 'D' ; c++){
        cout<<c<<"\n";
        PrintBinary(int(c));
    }
    for(char c = 'a' ; c <= 'd' ; c++){
        cout<<c<<"\n";
        PrintBinary(int(c));
    }
    char c = 'A';
    c = c | (1<<5);
    cout<<c<<endl;
    char x ='z';
    x = x ^ (1<<5);
    cout<<x;
    char B = 'B';
    //uppercase to lowercase
    char b = B| ' ';

    char d = 'd';
    char D = d & '_';

    //Trick 4 : clear LSB's
    //how to clear the least significent bits
    PrintBinary(59);
    //00000111011
    //11111100000 -> invrese of 00000011111 --> (0000010000 - 1)
    //clear last 4 sigficent bits*/
    int i = 4;
    int temp = 59;
    int need = (temp & (~((1<<(i+1))-1)));
    PrintBinary(need);
    //int res = 59 & 10;
    //cout<<res;
    //Trick 5 : clare MSD's
    //00000111011
    //00000001111
    //00000010000-1
    //Trick 6 check power of two




