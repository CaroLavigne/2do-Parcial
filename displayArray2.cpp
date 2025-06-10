// displayArray - display the members of an array of length nSize
void displayArray(int intArray[]. int nSize)
{
    cout << "The value of the array is: \n";
    
    int* pArray = intArray;
    for(int n=0; n < nSize; n++. pArray++)
    {
        cout << n << ": " << *pArray << "\n";
    }
    cout << "\n";
}