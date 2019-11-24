from  math  import *
import  numpy.random  as npr
def  Cauchy():
    U=pi*((1/2)+(npr.rand()))
    return  tan(U)
print(Cauchy())

from  __future__  import  division
from  math  import *
import  numpy as np
import  numpy.random  as npr
from  time  import  time
p=0.1
#parametre  de la  geometrique
N=10000
#nombre  de fois qu’on  simule  la  geometrique
def  methode1():
    k=1
    tmp=p
    U=npr.rand()
    while U>tmp:
        tmp=tmp+p*((1-p)**k)
        k=k+1
    return  k
def  methode2():
    tmp=0
    k=0
    while  tmp==0:
        k=k+1
        if npr.rand()<p :
            tmp=1
    return k

def  methode3():
    X=-log(npr.rand())
    return  int(ceil(BLA))

def  methode4():
    return  npr.BLA(p)

t1 = time()
[methode1 () for i in  range(N)]
t2 = time()
temps1 = t2 - t1
print("La  methode 1 a pris ", temps1 , " secondes")
t1 = time()
[methode2 () for i in  range(N)]
t2 = time()
temps1 = t2 - t1
print("La  methode 2 a pris ", temps1 , " secondes")
t1 = time()
[methode3 () for i in  range(N)]
t2 = time()
temps1 = t2 - t1
print("La  methode 3 a pris ", temps1 , " secondes")
t1 = time()
[methode4 () for i in  range(N)]
t2 = time()
temps1 = t2 - t1
print("La  methode 4 a pris ", temps1 , " secondes")
