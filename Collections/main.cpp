#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
    vector<int> vec{};
    bool done{false};
    while(!done){
    cout<<"MENU:"<<endl;
    cout<<"P - Print numbers"<<endl;
    cout<<"A - Add number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the small number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit"<<endl;
    char choice{};
    cout<<"Enter choice: ";
    cin>>choice;
       if(choice =='A' || choice=='a'){                                //adding numbers
            cout<<"Adding a number"<<endl;
            int added_number;
            cin>>added_number;
            vec.push_back(added_number);
    }
            else if (choice =='P' || choice=='p'){ 
                if(vec.size() == 0)
                    cout<<"[] - the vector is empty"<<endl;
                        else{
                            cout<<"[";
                                for(auto element: vec){
                                    cout<< element << "  " ;
                                    cout<< "]";
                }
        }
            }
        else if (choice =='M' || choice=='m'){ 
            if(vec.size()==0)
                cout<<"Mean cannot compute...";
                else{
                    int sum{};
                    for(auto element : vec){
                        sum+=element;                                                                   
                        cout<<"The mean is: "<< static_cast<double>(sum)/vec.size()<<endl;
                         }
      }
        }
            else if (choice =='Q' || choice=='q'){
                    cout<<"Good Bye!";
                    done= true;
    }
            else if (choice =='S' || choice=='s'){
                if(vec.size()==0){
                cout<<"The vector is empty...";
           }
                else{
                    int smallest = vec.at(0);
                        for (auto element: vec)
                            if(element < smallest){
                                smallest = element;
                                cout<<"Smallest number is: "<< smallest <<endl;
  }
                }
        }
    
            else if (choice =='L' || choice=='l'){
                if(vec.size()==0){
                    cout<<"The vector is empty...";
           }
                else{
                    int largest = vec.at(0);
                        for (auto element: vec)
                            if(element > largest){
                                largest = element;
                                cout<<"Largest number is: "<<largest<<endl;
  }
                }
        }
    }
    return 0;
}