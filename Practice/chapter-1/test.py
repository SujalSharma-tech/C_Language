def transformSentence(sentence):
    ls = sentence.split(" ")
    newstr = ""
    for i in ls:
        newstr += i[0]
        for j in range(1, len(i)):

            if i[j-1].lower() < i[j].lower():

                newstr += i[j].upper()
            elif i[j-1].upper() == i[j].upper():
                newstr += i[j]
            else:

                newstr += i[j].lower()
        newstr += " "

    print(newstr)


str1 = input()
transformSentence(str1)
