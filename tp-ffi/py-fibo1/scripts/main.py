from mypackage.myfibo import *

if __name__ == '__main__':

    print('TODO')

    for i in range(0, 11):
        print("fibo naive de " + str(i) + " = " + str(fibo_naive(i)))
    
    for i in range(0, 11):
        print("fibo iterative de " + str(i) + " = " + str(fibo_iterative(i)))

