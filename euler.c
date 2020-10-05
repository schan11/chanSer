int problem1(){
    
    int i;
    int sum = 0;
    int exclude = 0;
    
    for (int i = 0; i < 1000; i++){
        if (i % 3 == 0){
            sum += i;
        }
        if (i % 5 == 0){
            sum += i;
        }
        if (i % 15 == 0){
            exclude += i;
        }
    }
    return sum - exclude;
}


int problem5(){
    
    int init = 1;
    int j = 0;
    
    while (j == 0){
        
        int i;
        for (int i = 1; i <= 20; i++){
            if (init % i == 0){
                j = 1;
            }
            
            else{
                j = 0;
                init++;
                break;
            }
        }
    }
    return init;
}
