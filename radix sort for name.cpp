#include<bits/stdc++.h>
using namespace std;

char charAt(string name,int index){
    return name[index];
}

void countSort(string name[],int index,int totalNm,char lower,char upper){
    int totalChar = upper-lower;
    int charCount[totalChar+1] = {0};
    string tempNm[totalNm];


    for(int i=0;i<totalNm;i++){
        int charIndex = (name[i].length()-1 < index) ? 0 : (charAt(name[i],index)-lower);
        charCount[charIndex]++;
    }


    for(int i=1;i<totalChar;i++)
        charCount[i] += charCount[i-1];


    for(int i=totalNm-1;i>=0;i--){
        int charIndex = (name[i].length()-1<index) ? 0 : (charAt(name[i],index)-lower);
        tempNm[charCount[charIndex]-1] = name[i];
        charCount[charIndex]--;
    }

    for(int i=0;i<totalNm;i++)
        name[i] = tempNm[i];
}

void radixSort(string name[],int totalNm,int maxNmLn,char lower,char upper){
    for(int i=maxNmLn-1;i>=0;i--){
        countSort(name,i,totalNm,lower,upper);
    }
}

int InputNm(string name[], int totalNm){
    int maxNmLn = 0;
    for(int i=0;i<totalNm;i++){
        cout << i+1 << ". ";
        fflush(stdin);
        getline(cin,name[i]);
        int len = name[i].length();
        maxNmLn = max(maxNmLn,len);
    }
    return maxNmLn;
}

int main(){
    int totalNm;
    cout << "Total Name: ";
    cin >> totalNm;
    string name[totalNm];
    int maxNmLn = InputNm(name,totalNm);

    radixSort(name,totalNm,maxNmLn,' ','z');

    cout << "\nSorted Name:\n";
    for(int i=0;i<totalNm;i++)
        cout << i+1 << ". " << name[i] << "\n";

    return 0;
}





