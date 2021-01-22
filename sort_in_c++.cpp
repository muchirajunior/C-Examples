    #include <iostream>
    
    #include <chrono>
    using namespace std;
    void sort(int array[10000],int length){
        
        int temp; 
       
        
       
            for (int i=0;i<length;i++){
            if(array[i]<array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                i=-1;
                }
        }
    }
 
int main(int argc, char const *argv[])
    {
      int array[10000];
     for (int i = 0; i < 10000; i++)
        {
            array[i]=rand()%10000;
        }

         sort(array,10000);
       
      
       
        return 0;
    }
