import sqlalchemy
from sqlalchemy import create_engine, text

pp = Flask(__name__)

# Create engine to real relative database
enginedata = create_engine("sqlite+pysqlite:///data.db")

# Selecting info from db
with enginedata.connect() as conn:
    result = conn.execute("SELECT class FROM class where id=1")
    for row in result:
        print("class:", row["class"])

# Create engine to memory access only
# Echo forwards all logging to term
# Future is future proofing to Alch2.0
engine = create_engine("sqlite+pysqlite:///:memory:", echo=True, future=True)

# Creating table, and inserting information
with engine.connect() as conn:
    conn.execute(text("CREATE TABLE someTable (x INTEGER, y INTEGER)"))
    conn.execute(
        text("INSERT INTO someTable (x, y) VALUES (:x, :y)"),
        [{"x": 1, "y": 1}, {"x": 2, "y": 4}]
        )
    conn.commit()

# Different way to connect/commit changes
with engine.begin() as conn:
    conn.execute(
        text("INSERT INTO someTable (x, y) VALUES (:x, :y)"),
        [{"x": 6, "y": 8}, {"x": 9, "y": 10}]
    )

# Selecting infrom from memoryDB
with engine.connect() as conn:
    result = conn.execute(text("SELECT x, y FROM someTable"))
    for row in result:
        print(f"x: {row.x}, y: {row.y}")

# Dict assignment
result = conn.execute(text("SELECT x, y FROM someTable"))

for row in result.mappings():
    x = row["x"]
    y = row["y"]

# Tuple assignment
result = conn.execute(text("SELECT x, y FROM someTable"))
for x, y in result:
    # Some stuff..


# Access via integer index
result = conn.execute(text("SELECT x, y FROM someTable"))
for row in results:
    x = row[0]
    y = row[1]

# Attribute assigment
result = conn.execute(text("select x, y from some_table"))

for row in result:
    y = row.y
    x = row.x

    # illustrated using with Python f-strings. They're the same.
    print(f"Row: {row.x} {row.y}")
    print(f"Row: {x} {y}")
