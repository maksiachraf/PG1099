#groupe 2 , Maksi Achraf
from  __future__  import  division
from  math  import *
import  numpy  as np
import  numpy.random  as npr
import  scipy.stats  as sps
import  matplotlib.pyplot  as plt
from  scipy.special  import  gamma

#Exercice 1
def  olive(a,b,n):
    X=[a] # initialisation  de la  liste  des X_k
    for k in  range(n):
        if npr.rand() <= X[k]/(a+b+n) :
            # tirage d’une  olive
            X.append(X[k]+1)
    # si elle  est  verte
        else :
            X.append(X[k])
# si elle  est  noire
    return(X)

#Exercice 2
def tracageMn(a,b,n):
    X=olive(a,b,n)
    M=[]
    for k in range(n):
        M[k]=X[k]/(a+b+n)
    plt.plot(range(0,n),M,'r',label='Mn')
    plt.show()

tracageMn(1,2,1000)
tracageMn(1,2,2000)
tracageMn(1,2,3000)

#Exercice 3
def empir(n,N):
    M = np.array([olive(1,1,n)[i]/N for i in range(N)])  # On trie les donnees en ordre croissant
    X_croissant = np.sort(M)  # On trie les donnees en ordre croissant
    plt.step(X_croissant, np.arange(N)/N, label="Fonction de repartition empirique")
    plt.legend()
    plt.show()
empir(1000,6000)
