
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cstdint>

using namespace std;


int main() {
    
    int64_t first[1000];
    int64_t second[1000];
    int64_t T,N,K;
    
    std::cin>>T;
    while(T-- > 0){
        std::cin>>N;
        std::cin>>K;
        
        for(int i = 0 ; i < N;i++){
            std::cin>>first[i];
        }
        
        for(int i =0 ; i < N;i++){
            std::cin>>second[i];
        }
     
        sort(first,first+N);
        sort(second,second+N);
        reverse(second,second+N);
        
        bool flag = true;
        for(int i = 0 ; i < N;i++){
            if(first[i] + second[i] < K){
                flag = false;
                break;
            }
        }
        
        if(flag == true)
            std::cout<<"YES";
        else
            std::cout<<"NO";
   
        std::cout<<"\n";
    }
    return 0;
}
