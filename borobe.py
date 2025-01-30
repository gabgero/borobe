print("Ciao!")
print("scrivi 2 numeri")
print("se il primo è più grande del secondo li invertirò")
a = float(input())
b = float(input())
if a > b:
    c = a
    a = b
    b = c
    print(a)
    print(b)
    print("ok ho invertito i numeri")
else:
    print(a)
    print(b)
    print("ok non ho modificato nulla")
print("vuoi andare avanti?")
avanti1 = input()
if avanti1 == "si":
    print("bene!")
    print("scrivi di nuovo 2 numeri")
    d = float(input())
    e = float(input())
    print("vuoi sapere la somma?")
    avanti2 = input()
    if avanti2 == "si":
        somma = d + e
        print("fantastico!")
        print("eccoti la somma:")
        print(somma)
        print("vuoi anche la media?")
        avanti4 = input()
        if avanti4 == "si":
            print("grandioso!")
            print("eccoti la media dei 2 numeri:")
            media = somma / 2
            print(media)
            print("vuoi finire?")
            fine = input()
            if fine == "si":
                print("perfetto!")
                print("FINE!")
            else:
                print("e allora sti cazzi")
        else:
            print("FAI SCHIFO COGLIONE")
    else:
        print("FAI SCHIFO COGLIONE")
        print("vuoi sapere la media?")
        avanti3 = input()
        if avanti3 == "si":
            print("eccoti la media dei 2 numeri:")
            somma = d + e
            media = somma / 2
            print(media)
            print("vuoi finire?")
            fine = input()
            if fine == "si":
                print("perfetto!")
                print("FINE! (anche se non hai fatto la somma)")
            else:
                print("e allora sti cazzi")
        else:
            print("BASTA MI HAI ROTTO IL CAZZO")
else:
    print("FAI SCHIFO COGLIONE")
