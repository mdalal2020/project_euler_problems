def remove_dup (lst):
    i = 0
    while i < len(lst)-1:
        seen = lst[i]
        if lst[i+1] == seen:
            lst.remove(i+1)
        else:
            i+=1
    return lst
