#include<iostream>
#include<string.h>

using namespace std;
int v=0;
int o,m;
void iqtest()
{
  int a,b,c,d,e;
 std::string f,g,h,i,j;
  cout<<"\n\n1. What is the next number in the sequence 1, 4, 27, 256, 3125, ...?"<<endl;
  cin>>a;
  cout<<"\n\n2. what is the missing number in the following sequence: 2, 5, 12, 27, 58, __?"<<endl;
  cin>>b;
  cout<<"\n\n3. If A = 1, B = 2, C = 3, and so on, what is the sum of the numerical values of the letters in the word 'INTELLIGENCE'?"<<endl;
  cin>>c;
  cout<<"\n\n4. What is the next letter in the following sequence: A, C, F, J, O, ...?"<<endl;
  cin>>f;
  cout<<"\n\n5. Which word does not belong in the following group: Sable, Mink, Fleece, Ermine, Chinchilla?"<<endl;
  cin>>g;
  cout<<"\n\n6. What is the missing number in the following sequence: 1, 8, 27, 64, 125, ...?"<<endl;
  cin>>d;
  cout<<"\n\n7. What is the next symbol in the following sequence: %, &, $, #, @, ...?"<<endl;
  cin>>h;
  cout<<"\n\n8. Which word is the odd one out: Palm, Elm, Ash, Maple, Pine?"<<endl;
  cin>>i;
  cout<<"\n\n9. What is the next number in the following sequence: 3, 4, 7, 11, 18, 29, ...?"<<endl;
  cin>>e;
  cout<<"\n\n10. What is the missing letter in the following sequence: A, C, E, G, I, __, M?"<<endl;
  cin>>j;
  
  if(a==46656)
  v=v+1;
  
  
  if(b==121)
  v=v+1;
  
  
  if(c==117)  
  v=v+1;
  
  
  if(f=="u"||f=="U")  
  v=v+1;
  
  
  if(g=="fleece"||g=="FLEECE"||g=="Fleece")  
  v=v+1;
  
  
  if(d==216)  
  v=v+1;
  
  
  if(h=="!")  
  v=v+1;
  
  
  if(i=="Pine"||i=="PINE"||i=="pine")  
  v=v+1;
  
 
  
  if(e==47)  
  v=v+1;
 
    
    
  if(j=="k"||j=="K")  
  v=v+1;

    
    }
int main()
{
    cout<<"iq test\n ";
    cout<<"\nYou will be subjected to 10 questions to complete the test:\n\n";
    cout<<"Are you ready to start?"<<endl;
    cout<<"1.YES"<<endl;
    cout<<"2.NO"<<endl;
    cin>>o;
    switch(o)
     { case(1):
    cout<<"YES"<<endl;
    break;
    case(2):
    cout<<"NO"<<endl;
    break;
     }
if (o==1)    
iqtest();
else
cout<<"please try again later";

cout<<"\n\nyou got: "<<v<<"/10"<<endl;
if(v>=5 && v<8)
  cout<<"good mark"<<endl;
if(v<5)
  cout<<"hard luck"<<endl;
if(v>=8)
  cout<<"excellent mark"<<endl;
  
cout<<"\n\nDo you want the correct answers?"<<endl;

cout<<"1.YES"<<endl;
    cout<<"2.NO"<<endl;
    cin>>m;
    switch(m)
     { case(1):
    cout<<"YES"<<endl;
    break;
    case(2):
    cout<<"NO"<<endl;
    break;
     }
if (m==1)    
cout<<"1. 46656\n 2. 121\n 3. 117\n 4. U\n 5. Fleece\n 6. 216\n 7. !\n 8. Pine\n 9. 47\n 10. K\n";
else
cout<<"Thanks for the experience";

    }
