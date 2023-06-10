 for (int i = 2; i < N; i++){
        if(prime_divisor[i].empty()){
            for (int j = i; j < N; j+=i){
                prime_divisor[j].push_back(i);
            }
        }
    }
