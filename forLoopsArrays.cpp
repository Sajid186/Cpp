#include <iostream>

using namespace std;

int main()
{

    //static array
    string cars[4] = {"BMW", "Bugatti", "Mercedes", "Lamborghini"  };    // arr[n]={index0,.....}

       int modelnum[4] ={
        100,
        300,
        444,
        8969,
    };

    cout << "The car list: " << cars[0] << "," << cars[1]<< "," << cars[2]<< "," << cars[3]<<endl;
    cout << "Car Models: " << cars[0] << ": " << modelnum[0] <<endl;
    cout << "Car Models: " << cars[1] << ": " << modelnum[1] <<endl;
    cout << "Car Models: " << cars[2] << ": " << modelnum[2] <<endl;
    cout << "Car Models: " << cars[3] << ": " << modelnum[3] <<endl;

    //update an element from an array...
    modelnum[3] = 111;
    cout<<"\n";
    cout<< "Updated Model Number of Lamborghini: "<< cars[3] << ": " << modelnum[3] <<endl;
    cout<<"\n";

    //array with for loops..
    int oddnums[] = {1,3,5,7,9};
    //to know the actual number of elements in the array.... total size of the array / size of one of the elements (5 / 1 = 5)
    int numOfElementsInArray = sizeof(oddnums) / sizeof(oddnums[0]);

    cout <<"Number of elements int he array of odd numbers: " << numOfElementsInArray <<endl;

    //printing the elements in the array using a for loop

    for(int i =0; i < numOfElementsInArray ; i = i+1){
        cout << oddnums[i] << endl;
    }



    /*for(starting value; conditional statement; incremental value)
    when the program executes, first it finds starting value is 1, then it checks is it less then 12
    yes, it is less, so it runs the statement inside curly bracket and value of x then it increases the value of x by 1 (x++);
    print then increment...after increment now x is 2 so it checks only condition not starting value*/
    cout<<"\n";
    cout<<"My for loop: "<<endl;
    for(int x = 1; x < 12; x++)
    {

        cout << x << endl;

   }

  //int x = 1;
  //while( x<11)
  //{
     // cout << x << endl;
     // x++;
  //}

    return 0;
}
