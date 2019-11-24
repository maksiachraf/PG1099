
import numpy as np
G=np.zeros((30,30),dtype='bool')
def gameoflife(G):
    import numpy as np
    for i in range(len(G)):
        for j in range(len(G)):
            G[i][j] = False
    G[13][16]=True
    G[14][16]=True
    G[16][16]=True
    G[15][15]=True
    G[19][19]=True
    print(G)
    for i in range(len(G)):
        for j in range(len(G)):
            c=0
            if G[i][j]==True :
                for k in range(-1,2,2):
                    for l in range(-1,2,2):
                        if G[i+k][j+l]==True:
                            c=c+1
                if c!=2 and c!=3:
                    G[i][j]=False
            else :
                for k in range(-1,2,2):
                    for l in range(-1,2,2):
                        if G[i+k][j+l]==True:
                            c=c+1
                if c==3 :
                    G[i][j]=True
    return G
i=1
while i>0 :
    n=input("entrer")
    G=gameoflife(G)
    print(G)
    i=i+1
