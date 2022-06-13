file = open("szachy.txt", "r", encoding="utf-8")


def empty_column_exists_and_maximum_empties(board: list):
    columns = []
    current_height = 0
    temp_column = []

    for i in range(8):
        for item in board:
            if current_height == 8:
                current_height = 0
                columns.append(temp_column.copy())
                temp_column.clear()

            temp_column.append(item[i])
            current_height += 1

    return any(len(set(p)) == 1 and "." in p for p in columns), sum(len(set(p)) == 1 and "." in p for p in columns)


boardEndsAtCharacterIndex = 73  # 8*8 + 8 (\n characters) + 1 (empty line)
currentBoardIndex = 0
boardCharactersCount = 64  # 8*8
emptyColumnsCount = 0
maxEmptyColumnsCount = 0

for line in file:
    file.seek(boardEndsAtCharacterIndex * currentBoardIndex)
    currentBoard = file.readlines(boardCharactersCount)

    result = empty_column_exists_and_maximum_empties(currentBoard)

    if result[0]:
        emptyColumnsCount += 1

    if result[1] >= maxEmptyColumnsCount:
        maxEmptyColumnsCount = result[1]

    currentBoardIndex += 1

print(emptyColumnsCount)
print(maxEmptyColumnsCount)
