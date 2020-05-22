#include <iostream>
#include <vector>
#include <pointers_header.h>

using namespace std;

void const_and_pointers()
{
    /* POINTERS TO CONSTANTS */
    int high_score {100};
    int low_score {65};
    const int *score_ptr { &high_score }; // data pointed to by the pointers is constant and cannot be changed
    
    //    *score_ptr = 86; ERROR

    // the pointer itself can change and point somehwere else
    score_ptr = &low_score; // this is fine
    
    /* CONSTANT POINTERS */
    int high_score2 {100};
    int low_score2 {65};
    int *const score_ptr2 { &high_score }; // data pointed to by the pointers can be changed
    
    *score_ptr2 = 86;
    // score_ptr = &low_score2 ERROR
    
    /* CONSTANT POINTERS TO CONSTANTS */
    int high_score3 {100};
    int low_score3 {65};
    // data pointed  pointed to by the pointer is constant and cannot be changed
    // the pointer itself cannot change and point somewhere else
    const int *const score_ptr3 { &high_score };
    
    //    *score_ptr = 86; ERROR
    //    score_ptr = &low_score; ERROR
    
    
}

void allocation()
{
        // use 'new' to allocate storage
    int *int_ptr{nullptr};
    
    int_ptr = new int;
    
    cout << int_ptr << endl; // an address
    cout << *int_ptr << endl; // garbage
    
    *int_ptr = 100;
    
    cout << *int_ptr << endl; // 100
    
    // freeing the pointer
    delete int_ptr;
    
    int *array{nullptr};
    int size{};
    
    cout << "How big do you want the array? ";
    cin >> size;
    
    array = new int[size];
    
    // statements
    
    delete [] array; // free allocated storage
}

void memory_allocation()
{
    
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr << endl; // memory location of int_ptr on heap
    delete int_ptr; // frees memory
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout << "How many temps do you need? ";
    cin >> size;
    
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl;
    
    delete [] temp_ptr;
    
    cout << endl;
    
}

void pointer_arithmetic()
{
//    int scores[] {100, 95, 89};
//    
//    int *score_ptr {scores};
//    
//    cout << *score_ptr << endl; // 100
//    cout << *(score_ptr + 1) << endl; // 95
//    cout << *(score_ptr + 2) << endl; // 89

    int scores[] {100, 95, 89, 69, -1};
    int *score_ptr {scores};
    
    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "\n==========================================" << endl;
    
    score_ptr = scores;
    
    while( *score_ptr != -1)
        cout << *score_ptr++ << endl; // same thing as above just with postincrement. Dereferences first, then increments pointer
        
    
}