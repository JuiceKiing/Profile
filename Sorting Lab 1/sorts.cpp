#include<iostream>
#include<vector>
#include <fstream>
#include <list>
#include<chrono>
#include<cstdint>
#include<random>

using namespace std;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (vector<int>arr, int low, int high) 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) 
    { 
        // If the current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

//function for quick sort
void quickSort(vector<int>arr, int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
        at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 


//merge function to merge the two sub arrays
void merge(vector<int>array, int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(vector<int>array, int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


//insertion sort
void insertionSort(vector<int>arr, int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}




//bubble sort
void Test(vector<int>arr, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
}


//selection sort
void selectionSort(vector<int>arr,int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }

 // display after sorting
//for(int i=0;i<n;i++)
//{
//cout<<arr[i]<<" ";
//}   
}


//bubble sort with an escape clause
void bubble_sort(vector<int>v1,int n)
{
int i = n -1; //initialize
bool sorting = true;
while(i >= 1 && sorting == true)
{
bool swopped = false;
for(int j=0;j<=i-1;j++)
{
if(v1[j]>v1[j+1])
{
swap(v1[j],v1[j+1]); //swap two values
swopped = true;
}
}
if(swopped == false)
sorting = false;
else
i = i-1;
}
// display after sorting
//for(int i=0;i<n;i++)
//{
//cout<<v1[i]<<" ";
//}
}

int main(){
int n;
//srand(ftime(NULL));
// input the value on n from user
cout<<"Enter the size : ";
cin>>n;





list<long long>times_S;
list<long long>times_B;
list<long long>times_E;
list<long long>times_I;
list<long long>times_M;
list<long long>times_Q;



int n_runs=5;
long long aveTime,aveTime2,aveTime3,aveTime4,aveTime5,aveTime6;
long long total_time,total_time2,total_time3,total_time4,total_time5,total_time6=0;



for (n;n<=20000;n=n+1000){

       
//create a vector of size n containing random numbers
vector<int>v1(n);

for(int i=0;i<n;i++){
// rand() method to generate random values from the given range from 1 to 1000000
random_device rd;
//std::mt19937 generator(rd());
std::mt19937 generator(rd());
std::uniform_int_distribution<> dist(1,1000000);
int number=dist(generator);

v1[i]=number;

}
// print the values of the vector to verify it is random or not
//cout<<"The random values of the vector is :\n";
//for(int i=0;i<n;i++)
//{
//cout<<v1[i]<<" ";
//}

    for(int j=0;j<5;j++){
        //Timing the Selection Sort
         auto start = std::chrono::high_resolution_clock::now();
         selectionSort(v1,n); 
         auto finish = std::chrono::high_resolution_clock::now();
         long long timeTaken = chrono::duration_cast<chrono::nanoseconds>(finish-start).count();
         total_time=total_time+timeTaken;

         //Timing the bubble sort with the escape clause
         auto start2 = std::chrono::high_resolution_clock::now();
         bubble_sort(v1,n); 
         auto finish2 = std::chrono::high_resolution_clock::now();
         long long timeTaken2 = chrono::duration_cast<chrono::nanoseconds>(finish2-start2).count();
         total_time2=total_time2+timeTaken2;

         //Time the bubble sort without escape clause
         auto start3 = std::chrono::high_resolution_clock::now();
         Test(v1,n); 
         auto finish3 = std::chrono::high_resolution_clock::now();
         long long timeTaken3 = chrono::duration_cast<chrono::nanoseconds>(finish3-start3).count();
         total_time3=total_time3+timeTaken3;
        
         //Time the insertion sort
         auto start4 = std::chrono::high_resolution_clock::now();
         insertionSort(v1,n); 
         auto finish4 = std::chrono::high_resolution_clock::now();
         long long timeTaken4 = chrono::duration_cast<chrono::nanoseconds>(finish4-start4).count();
         total_time4=total_time4+timeTaken4;

         //time the merge sort
         auto start5 = std::chrono::high_resolution_clock::now();
         mergeSort(v1, 0, n - 1);
         auto finish5 = std::chrono::high_resolution_clock::now();
         long long timeTaken5 = chrono::duration_cast<chrono::nanoseconds>(finish5-start5).count();
         total_time5=total_time5+timeTaken5;

         //time the quick sort
         auto start6 = std::chrono::high_resolution_clock::now();
         quickSort(v1, 0, n - 1);
         auto finish6 = std::chrono::high_resolution_clock::now();
         long long timeTaken6 = chrono::duration_cast<chrono::nanoseconds>(finish6-start6).count();
         total_time6=total_time6+timeTaken6;


        
        }

aveTime=total_time/n_runs;
aveTime2=total_time2/n_runs;
aveTime3=total_time3/n_runs;
aveTime4=total_time4/n_runs;
aveTime5=total_time5/n_runs;
aveTime6=total_time6/n_runs;


times_S.push_back(aveTime);
times_B.push_back(aveTime2);
times_E.push_back(aveTime3);
times_I.push_back(aveTime4);
times_M.push_back(aveTime5);
times_Q.push_back(aveTime6);

//cout<<"\n"<<aveTime<<endl;



//cout<<"\nAfter bubble sort :"<<endl;
//bubble_sort(v1,n);
//cout<<"\n";
//cout<<"\nAfter SelectionSort sort :"<<endl;
//selectionSort(v1,n);


}
for (auto const &v : times_S)
        std::cout << v << "\n";

cout<<endl;

for (auto const &v : times_B)
        std::cout << v << "\n";

cout<<endl;

for (auto const &v : times_E)
        std::cout << v << "\n";

 cout<<endl;

for (auto const &v : times_I)
        std::cout << v << "\n";

cout<<endl;

for (auto const &v : times_M)
        std::cout << v << "\n";

cout<<endl;

for (auto const &v : times_Q)
        std::cout << v << "\n";








return 0;
}