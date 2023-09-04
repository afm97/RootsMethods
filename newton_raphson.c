
float newton_raphson(float x_0, int number_of_iterations, float acceptable_iterative_approach){
    //ESTA FUNCAO RECEBE UM PONTO INICIAL E A PARTIR DELE BUSCA O ZERO DE UMA DADA FUNÇÃO
    int iteration = 0;
    float x_n, f, df, iterative_approach;

    f = function_calc(x_0); df = derivative_function_calc(x_0);

    if (f <= acceptable_iterative_approach && f >=-acceptable_iterative_approach){
            return x_0;
    }

    do{
        
        x_n = x_0 - f/df;

        iterative_approach = pow(pow((x_n - x_0)/x_n,2),0.5);

        printf(" \titeration = %.3d |\terro = %.8f |\troot = %f |\tf(x) = %.5f \n", iteration,iterative_approach,x_n,f);

        f = function_calc(x_n); df = derivative_function_calc(x_n);
        x_0 = x_n;

        iteration++;

    } while (iteration < number_of_iterations && iterative_approach > acceptable_iterative_approach);
    
    return x_n;
}