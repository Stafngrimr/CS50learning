# hello.py
    answer = input("What's your name: ")
    print(f"hello, {answer}")


# addition.py
    from cs50 import get_int

    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)

# addition.py without library
    x = int(input("x: "))
    y = int(input("y: "))

    print(x + y)

    print(x + y)

# agree.py
    s = input("Do you agree?: ")

    if s.lower() in ["y", "yes"]:
        print("Agreed.")

    elif s.lower() in ["n", "no"]:
        print("Not Agreed.")

# meow.py
    for i in range(3):
        print("meow")

# meow2.py
    def main():
        for i in range(3):
            meow()

    def meow():
        print("meow")

    main()

# meow3.py
    def main():
        meow(3)

    def meow(n):
        for in in range(n):
            print("meow")

    main()

# do-while loop replacement scheme
    def get_positive_int():
        while True:
            n = get_int("Positive Int: ")
            if n < 0:
                break
        return n

# mario.py
    for i in range(4):
        print("?", end="")
    print()

# also
    print("?" * 4)

# and also
    for i in range(3):
        for j in range(3):
            print("#", end="")
        print()

# scores.py
    scores = [35, 56, 67, 45, 32]

    print("Average: ", + str(sum(scores) / len(scores)))
    print(f"Average: {sum(scores) / len(scores)})

    average = sum(scores) / len(scores)
    print(f"Average: {average})

    # scores2.py
    scores = []

    for i in range(3):
        scores.append(get_int("Score: "))

    average = sum(scores) / len(scores)
    print(f"Average: {average})

# uppercase.py
    s = get_string("Before: ")

    print("After: ", end="")
    for c in s:
        print(c.upper(), end="")
    print()

    # ArgV example
    from sys import argv
    if len(argv) == 2:
        print(f"Hello, {argv[1]}")
    else:
        print("Hello world")

# exit.py
    import sys
    if len(sys.argv) != 2:
        print("Missing command line argument")
        sys.exit(1)
    else:
        print(f"Hello, {sys.argv[1]}")
    sys.exit(0)

# numbers.py - works the same with strings. Must be exact.
    import sys

    numbers = [4, 6, 8, 2, 7, 5, 0]

    if 0 in numbers:
        print("Found.")
    else:
        print("Not Found.")

# Dictionary/phonebook.py
    from cs50 import get_string
    from sys import exit

    people = {
        "Brian": "Number1",
        "David": "Number2"
    }

    name = get_string("Name: ")
    if name in people:
        print(f"Number: {people[name]}")
        exit(0)
    else:
        print("Person not found.")
        exit(1)

# Creating phonebook in csv
    import csv
    from cs50 import get_string

    file = open("phonebook.csv", "a")

    name = get_string("Name: ")
    number = get_string("Number: ")

    writer = csv.writer(file)

    writer.writerow([name, number])
    file.close()

# More pythonic way to do this
    import csv
    from cs50 import get_string

     with open("phonebook.csv", "a") as file:

        name = get_string("Name: ")
        number = get_string("Number: ")

        writer = csv.writer(file)

        writer.writerow([name, number])
