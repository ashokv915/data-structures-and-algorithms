n = input("Enter elements\n")
elem = n.split(",")

l = len(elem)


def bubblesort(elem):
    for i in range(0,l):
        for j in range(0,l-i-1):
            if(int(elem[j]) > int(elem[j+1])):
                elem[j], elem[j+1] = elem[j+1], elem[j]
    

    return elem

print(bubblesort(elem))