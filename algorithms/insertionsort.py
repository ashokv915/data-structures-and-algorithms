n=input("Insert elements\n")

elem = n.split(",")

def insertion(a):
    l = len(a)

    for i in range(1,l):
        tmp = a[i]
        j=i-1

        while((tmp < a[j]) and j>=0):
            a[j+1] = a[j]
            j=j-1
        a[j+1] = tmp
    
    print(elem)

insertion(elem)