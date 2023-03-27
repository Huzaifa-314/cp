cindex=[1,2,3,4]
find=[1,2,3,4]
list=[4,2,1,3]
for i in find:
    for j in range(len(cindex)):
        if(i==list[j]):
            print(cindex[j])
            list.remove(i)
            cindex.remove(cindex[j])
            break