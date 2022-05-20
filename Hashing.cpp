#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int hashTable[10];
int hashTableSize=10;

int hashFunction(int value){
    return value%hashTableSize;
}
void insert(int value){
    int index=hashFunction(value);
    hashTable[index]=value;
}
void search(int value){
    int index=hashFunction(value);
    if(hashTable[index]==value){
        cout<<value<<" is found!"<<endl;
    }else{
        cout<<value<<" is not found!"<<endl;
    }
}
int main()
{
    insert(5);
    insert(23);
    search(5);
    insert(17);
    insert(35);
    search(23);
    search(5);
    return 0;
}

