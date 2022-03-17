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
# From the CS50 tournaments.py problem
    def simulate_tournament(teams):
    """Simulate a tournament. Return name of winning team."""
    # TODO
    while len(teams) > 1:
        teams = simulate_round(teams)

    # we want the 1 and only item in the list, hence 0
    # we only want to return the team name, hence "team"
    return teams[0]["team"]

# favourites.py
    import csv

    with open("Favourite TV Shows.csv", "r") as file:
        reader = csv.reader(file)
        next(reader)
        for row in reader:
            print(row[1])

# Better mthod for favourites.py
    import csv

    titles = {}

    with open("Favourite TV Shows.csv") as file:
        reader = csv.DictReader(file)
        for row in reader:
            titles.add(row["title"].strip().upper())
            if title in titles:
                titles[title] += 1
            else:
                titles[title] = 1
    def f(title):
        return titles[title]

    for title in sorted(titles, key=f, reverse=True):
        print(title, titles[title])

# favourites.py - Version 2
    import csv

    title = input("Title: ").strip().upper()

    with open("Favourite TV Shows.csv", "r") as file:
        reader = csv.DictReader(file)
        counter = 0
        for row in reader:
            if row["title"].strip().upper() == title:
                counter += 1

    print(counter)

# Final version of favourites.py using SQL
    import csv
    from cs50 import SQL

    open("showsdb", "w").close()
    db = SQL("sqlite:///shows.db")

    db.execute("CREATE TABLE shows (id INTEGER, title TEXT, PRIMARY KEY(id))")
    db-execute("CREATE TABLE genres (show_id INTEGER, genre TEXT, FOREIGN KEY(show_id) REFERENCES shows(id))")

    with open("Favourite TV shows.csv", "r") as file:
        reader = csv.DictReader(file)
        for row in reader:
            title = row["title"].strip().upper()
            id = db.execute("INSERT INTO shows(title) VALUES(?)", title)
            for genre in row["genres"].split(", "):
                db.execute("INSERT INTO genres(show_id, genre) VALUES(?, ?)", id, genre)
