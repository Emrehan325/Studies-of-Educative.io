#include <vector>
using namespace std;

void insert(vector<int>& array, int right_index, int value) {
for (int i = 0; i < array.size(); i++){
     if (array[i] == value){
       array.erase(array.begin() + i);
       break;
     }
  }
  
for (int i = 0; i < right_index; i++){
      if (value < array[i]){
        array.insert(array.begin() + i, value);
        break;      
      }
   }  
  
};