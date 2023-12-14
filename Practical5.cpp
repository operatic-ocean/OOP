#include <iostream>
using namespace std;

#define SIZE 5

template <typename T>
void selection(T A[], int size) {
    int i, j, min;
    T temp;
    
    cout<<"Sorted array is :"<<endl;
    for(i = 0; i < size-1; i++){
        min = i;
        for(j = i+1; j < size; j++){
            if(A[j] < A[min])
                min = j;
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
    
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
    
    cout<<endl;
}

int main() {
    int X[SIZE];
    float Y[SIZE];
    char Z[SIZE];
    
    cout << "Enter 5 integer elements to sort them:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        cin >> X[i];
    }
    
    selection(X, SIZE);
    
    
    cout << "Enter 5 float elements to sort them:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        cin >> Y[i];
    }
    
    selection(Y, SIZE);
    
    
    cout << "Enter 5 char elements to sort them:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        cin >> Z[i];
    }
    
	selection(Z, SIZE);
    
    return 0;
}
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//
//void selectionSort(T a[], int noOfElements)
//{
//    int min;
//    T temp;
//    for (int i = 0; i < noOfElements; i++)
//    {
//        min = i;
//        for (int j = i + 1; j < noOfElements; j++)
//        {
//            if (a[min] > a[j])
//            {
//                min = j;
//            }
//        }
//        temp = a[min];
//        a[min] = a[i];
//        a[i] = temp;
//    }
//    for (int i = 0; i < noOfElements; i++)
//    {
//        cout << a[i] << endl;
//    }
//}
//
//int main()
//{
//    int i[] = {5, 3, 2, 1};
//    float f[] = {5.1, 2.0, 5.2, 1.0};
//    char c[] = {'g', 'f', 'e', 'd', 'c', 'b', 'a'};
//    selectionSort(i, 4);
//    selectionSort(f, 4);
//    selectionSort(c, 7);
//    return 0;
//}
