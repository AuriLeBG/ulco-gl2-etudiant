from mypackage.myfibo import fibo_naive, fibo_iterative

if __name__ == '__main__':

    print('TODO')

    for i in range(0, 11):
        print(f"fibo naive de {i} = {fibo_naive(i)}")
    
    for i in range(0, 11):
        print(f"fibo iterative de {i} = {fibo_iterative(i)}")

