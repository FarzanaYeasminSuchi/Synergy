#include <iostream>

#include <fstream>

#include <string>

#include <sstream>
using namespace std;

int main() {
  //open the text file
    ifstream inputFile("abc.txt"); 
    
    //cehcek if the file has been opened
    if(inputFile.is_open()){
        string line;
        int wordCount=0;
        while(getline(inputFile,line)){
            stringstream ss(line);
            string word;

            while (ss>>word){
                 wordCount++;
            }
        }    
        // After the word count has been done,close the file    
        inputFile.close(); 
        cout<<"The total no. of words in the abc.txt file are : " << wordCount<<endl; }
    //incase if the file has not been opened  
    else {
        cout<<"Error in opening the file"<<endl;
     }  

    return 0;   
}