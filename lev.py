def print_lex_circ(str,len,x):

    len_crc_strings = set()
    str = str + str
    for i in range(len):
        len_crc_strings.add(str[i : i+x])
    for i in len_crc_strings:
         print(i,end=" ")
if __name__=="__main__":
    str    ="baaaa"
    lenstr =len(str)
    x      =4
    print_lex_circ(str,lenstr,x)
