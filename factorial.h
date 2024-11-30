int findFactorial(int inputInteger) {
    if(inputInteger == 0) {
        return 1;
    }

    return inputInteger * findFactorial(inputInteger - 1);
}