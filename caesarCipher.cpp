/* Caesar cipher encrypter and decrypter
created by Ava C.
started on 7-17-20, finished on 7-18-20
*/

#include <iostream>
using namespace std;

int main()
{
    string encryptOrDecrypt;
    int shift;
    bool done = false;
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string text;
    string enter;

    while(done==false){
    cout<<"This program encrypts and decrypts Caesar ciphers."<<endl;
    cout<<"Do you want to encrypt or decrypt? ";
    getline(cin, encryptOrDecrypt);
    if ((encryptOrDecrypt=="encrypt")||(encryptOrDecrypt=="Encrypt")||(encryptOrDecrypt=="ENCRYPT")){
        cout<<"You chose to encrypt."<<endl;
        cout<<"How much do you want to shift your text? ";
        cin>>shift;

        cout<<"a -> "<<alphabet[shift]<<endl;
        cout<<"Enter your text: ";
        cin.ignore();

        getline(cin,text);
        
        for (int i=0;i<text.length();i++) 
        { 

            for (int j=1; j<=shift;j++){
                if ((text[i]=='Z')||(text[i]=='z'))
                {
                text[i]=text[i]-25;
                }

                else if (((65<=text[i])&&(text[i]<90))||((97<=text[i])&&(text[i]<122))){
                text[i]= text[i]+1;

               }
               
                else{
                    text[i]=text[i];
                }
            }
              
      }
        
        cout<<text<<endl;

        done=true;
    }
    else if ((encryptOrDecrypt=="decrypt")||(encryptOrDecrypt=="Decrypt")||(encryptOrDecrypt=="DECRYPT")){
        cout<<"You chose to decrypt."<<endl;

        cout<<"How much was your text shifted? ";
        cin>>shift;

        cout<<"a <- "<<alphabet[shift]<<endl;
        cout<<"Enter your encrypted text: ";
       
         cin.ignore();

        getline(cin,text);
        
        for (int i=0;i<text.length();i++) 
        { 

            for (int j=1; j<=shift;j++){
                if ((text[i]=='A')||(text[i]=='a'))
                {
                text[i]=text[i]+25;
                }

                else if (((65<text[i])&&(text[i]<=90))||((97<=text[i])&&(text[i]<=122))){
                text[i]= text[i]-1;

               }
               
                else{
                    text[i]=text[i];
                }
            }
            
      }
        
        cout<<text<<endl;
        done=true; 
    }

    else{
        cout<<"An error has occured. The program will restart."<<endl;
    }
    }
    cout<<"Enter any letter to stop the program. ";
    cin>>enter;
    return 0;
}
