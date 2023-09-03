float bisection(float a, float b, int number_of_iterations, float acceptable_iterative_approach){
    //ESTA FUNCAO RECEBE UM INTERVALO DEFINIDO PELOS PONTOS A E B E DEVOLVE A RAIZ DA FUNCAO FORNECIDA
    int iteration = 0;
    float c, f_a, f_b, f_c, iterative_approach;

    c = (a+b)/2;

    f_a = function_calc(a); f_b = function_calc(b); f_c = function_calc(c); 

    do{
        if (f_c <= acceptable_iterative_approach && f_c >=-acceptable_iterative_approach){
            return c;
        }else{
            if (f_a*f_c < 0){
                b = c;
                f_b = function_calc(b); 
            }else{
                a = c;
                f_a = function_calc(a);
            }
        }

        iterative_approach = pow(pow((a - b)/c,2),0.5);

        printf(" \titeration %.3d |\titerative_approach %.8f |\tx %f |\tf %f \n", iteration,iterative_approach,c,f_c);
        c = (a+b)/2;
        f_c = function_calc(c);
        
        iteration++;
    }while (iteration < number_of_iterations && iterative_approach > acceptable_iterative_approach);
    
    return c;
}