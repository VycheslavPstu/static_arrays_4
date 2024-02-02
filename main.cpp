#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

const int list_size = 5;


int comp1 (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
 
 

int task_1(int *list){
    cout << "Task №1\n";
    for (int i=0; i < list_size; i++){
        cout << list[i] << '\n';
    }
    
    for (int i=4; i >= 0; i--){
        cout << list[i] << '\n';
    }
    return 0;    
}


int task_2(int *list, int k){
    int index;
    cout << "\nTask №2\n";
    for (int i=k; i < k+list_size-1; i++){
        if (i >= list_size){index = (i-list_size)%list_size;}
        else {index = i;}
        cout << list[index] << '\n';
    }
    return 0;    
}



int task_3(int *list, int k){
    int new_size = 0;
    cout << "\nTask №3\n";
    int max = *max_element(list, list+list_size);
    qsort(list, list_size, sizeof(int), comp1);
    for (int i=0; i < list_size; i++){
        cout << list[i] << '\n';
        new_size++;
        if (list[i] == max){
            break;
        }
    }
    
    int index;
    cout << "\nTask №4\n";
    for (int i=k; i < k+new_size; i++){
        if (i >= new_size){index = (i-new_size)%new_size;}
        else {index = i;}
        cout << list[index] << '\n';
    }
    return 0; 
}



int main(){
    int list[list_size] = {11, 55, 33, 44, 55};
    int k;
    cout << "Enter k: ";
    cin >> k;
    task_1(list);
    task_2(list, k);
    task_3(list, k);

    return 0;
}
